const express = require('express');
const app = express();
const bodyparser = require('body-parser');
const { exec } = require('child_process');
const PORT = 7000;
const cors = require('cors');
const { setTimeout } = require('timers/promises');
const { setInterval } = require('timers');

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
          const Name = req.body.Name;
          console.log(`Hello!! ${Name}`);

          exec('lex prog.l', (error, stdout, stderr) => {
                    if (error) {
                              console.error(`Error: ${error.message}`);
                              return;
                    }
                    if (stderr) {
                              console.error(`Error: ${stderr}`);
                              return;
                    }
                    console.log(`Output: ${stdout} lex command Executed`);
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
                              console.log(`Output: ${stdout} lex command Executed`);
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
                              console.log(`Output: ${stdout} output command Executed`);
                    });
          }, 2000)



})

app.listen(PORT, () => {
          console.log(`App is Running on PORT ${PORT}`)
})
