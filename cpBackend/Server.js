const express = require('express');
const app = express();
const bodyparser = require('body-parser');
const { exec } = require('child_process');
const PORT = 7000;
const cors = require('cors');
const fs = require('fs');
const readline = require("readline");

app.use(bodyparser.urlencoded({ extended: true }))
app.use(express.json());
app.use(cors());
app.use((req, res, next) => {
          res.header('Access-Control-Allow-Origin', '*');
          res.header('Access-Control-Allow-Methods', 'GET, POST, PUT, DELETE, OPTIONS');
          res.header('Access-Control-Allow-Headers', 'Origin, X-Requested-With, Content-Type, Accept, Authorization');
          next();
});

//All Supplementary Functions to Support Appllication

const getAllRecords = async () => {
          fs.readFile('./output.txt', 'utf8', (err, data) => {
                    if (err) {
                              console.error(err);
                              return;
                    }

                    const records = [];
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

          });

}

app.get('/', (req, res) => {
          res.send('<h1>App is Running Brother </h1>');
})

app.post('/dothing', async (req, res) => {
          const TextFile = req.body.TextFile;

          fs.writeFile('input.c', TextFile, () => {
                    console.log(" Contents are written To File !!")
          })

          exec('lex prog.l', (error, stdout, stderr) => {
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

          setInterval(() => {
                    getAllRecords();
          }, 2000);

})


app.listen(PORT, () => {
          console.log(`App is Running on PORT ${PORT}`)
})
