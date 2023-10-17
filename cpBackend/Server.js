const express = require('express');
const app = express();
const bodyparser = require('body-parser');
const { exec } = require('child_process');
const PORT = 8500;
const cors = require('cors');
const fs = require('fs');
const records = [];
const process = require('process');


app.use(bodyparser.urlencoded({ extended: true }))
app.use(express.json());
app.use(cors());
app.use((req, res, next) => {
          res.header('Access-Control-Allow-Origin', '*');
          res.header('Access-Control-Allow-Methods', 'GET, POST, PUT, DELETE, OPTIONS');
          res.header('Access-Control-Allow-Headers', 'Origin, X-Requested-With, Content-Type, Accept, Authorization');
          next();
});

app.get('/', (req, res) => {
          res.send('<h1>App is Running Brother </h1>');
})

app.post('/dothing', async (req, res) => {
          const TextFile = req.body.TextFile;

          fs.writeFile('input.c', TextFile, () => {
                    console.log(" Contents are written To File !!")
          })

          exec('lex lexer.l', (error, stdout, stderr) => {
                    if (error) {
                              console.error(`Error: ${error.message}`);
                              return;
                    }
                    if (stderr) {
                              console.error(`Error: ${stderr}`);
                              return;
                    }
          });


          setInterval(() => {
                    exec('cc lex.yy.c -ll', (error, stdout, stderr) => {
                              if (error) {
                                        console.error(`Error: ${error.message}`);
                                        return;
                              }
                              if (stderr) {
                                        console.error(`Error: ${stderr}`);
                                        return;
                              }
                    });
          }, 2000)


          setInterval(() => {
                    exec('./a.out', (error, stdout, stderr) => {
                              if (error) {
                                        console.error(`Error: ${error.message}`);
                                        return;
                              }
                              if (stderr) {
                                        console.error(`Error: ${stderr}`);
                                        return;
                              }
                    });
          }, 2000)

})

app.get('/records', async (req, res) => {
          fs.readFile('./output.txt', 'utf8', (err, data) => {
                    if (err) {
                              console.error(err);
                              return;
                    }

                    const lines = data.split('\n');

                    for (let i = 2; i < lines.length; i++) {
                              const line = lines[i];
                              const match = line.match(/(\S+)\s+(\S+)\s+(.*)/);
                              if (match) {
                                        const lexeme = match[1];
                                        const token = match[2];
                                        const value = match[3];
                                        records.push({ lexeme, token, value });

                              }
                    }

                    res.send(records)
                    records.splice(0, records.length);

          });
})

app.post('/writeSyntaxFile', (req, res) => {
          const TextFile = req.body.TextFile;

          fs.writeFile('InputSyntax.c', TextFile, () => {
                    console.log(" Contents are written To File !!")
          })

});

app.post('/AnalyzeText', (req, res) => {

          exec('gcc InputSyntax.c', (error, stderr) => {
                    if (error) {
                              res.json({ error: `${error.message}` });
                              return;
                    }
                    if (stderr) {
                              res.json({ error: stderr });
                              return;
                    }

                    res.send("Compiled File Successfully");
          });

})

const Original = process.cwd();

app.post("/generateICG", (req, res) => {

          const TextFile = req.body.TextFile;
          console.log("TextFile is : " + TextFile);

          const Directory = "./ICG"
          process.chdir(Directory);

          fs.writeFile('tests/test1.c', TextFile, () => {
                    console.log(" Contents are written To File !!")
          })



          exec('./run.sh', (error, stdout, stderr) => {
                    if (error) {
                              console.error(`Error: ${error.message}`);
                              return;
                    }
                    console.log(`STDOUT is : ${stdout}`);
                    res.send(stdout);
                    process.chdir(Original)
                    fs.writeFile('./ICG.txt', stdout, () => {
                              console.log(" Contents are written To Output File !!")
                    })
                    if (stderr) {
                              console.error(`Error: ${stderr}`);
                              return;
                    }
          });


})

app.get("/getRCG", (req, res) => {
          exec('node Seperate.js', (error, stdout, stderr) => {
                    if (error) {
                              console.error(`Error: ${error.message}`);
                              return;
                    }
                    console.log("Standard output is : "+stdout)
                    res.send(stdout);
                    if (stderr) {
                              console.error(`Error: ${stderr}`);
                              return;
                    }
          });
})


app.listen(PORT, () => {
          console.log(`App is Running on PORT ${PORT}`)
})
