import React from 'react'
import axios from 'axios';
import { useState } from 'react';
import '../CSS/Lex.css';


const Lex = () => {

  const [Text, SetText] = useState(null);
  const [RecordsGot, SetRecordsGot] = useState([]);
  const [Analysis, SetAnalysis] = useState(false);


  const handleterminalComm = async (e) => {
    e.preventDefault();
    try {
      alert("File Submitted Successfully!!")
      axios.post("http://localhost:8500/dothing", { TextFile: Text }).then((res) => {
        console.log(res.data)
      }).catch((err) => {
        console.log(`${err} is Occured`)
      })
    } catch (err) {
      console.log(`${err} is Occured`)
    }

  }

  const GetRecordsFromBackend = async () => {
    SetAnalysis(true)
    axios.get("http://localhost:8500/records").then((res) => {
      SetRecordsGot(res.data);
      console.log(res.data);
      alert("Tokens Are Created!!")
    }).catch((err) => {
      console.log(`${err} is Occured`)

    })

  }

  let punctuatorCount = 0;
  let keywordCount = 0;
  let identifierCount = 0;
  let operatorCount = 0;

  const CountParameters = async () => {
    

    RecordsGot.forEach(item => {
      switch (item.token) {
        case 'Punctuator':
          punctuatorCount++;
          break;
        case 'Keyword':
          keywordCount++;
          break;
        case 'Identifier':
          identifierCount++;
          break;
        case 'Operator':
          operatorCount++;
          break;
      }
    });

    console.log('Punctuators:', punctuatorCount);
    console.log('Keywords:', keywordCount);
    console.log('Identifiers:', identifierCount);
    console.log('Operators:', operatorCount);
  }

  CountParameters();

  return (
    <>
      <div style={{ display: "block", margin: 'auto', width: 'fit-content', alignItems: 'center', justifyContent: "center", marginTop: "20px" }}>

        <h2 className="heading-style-h1">Enter C Code !! Lets'Go!!</h2>

        <div style={{ display: "flex", flexDirection: "row", justifyContent: "space-evenly" }}>
          <textarea onChange={(e) => { SetText(e.target.value) }} style={{ height: "50vh", width: "70vh", marginTop: "50px", backgroundColor: "#393646", color: "whitesmoke", resize: 'none', border: "3px solid black", marginLeft: "30px" }} required></textarea>
          <div style={{ display: "flex", flexDirection: "column", height: "fit-content", marginTop: "120px" }}>
            <button onClick={handleterminalComm}>
              <p>Submit!</p>
            </button>

            <button onClick={GetRecordsFromBackend} style={{ marginTop: "30px" }}>
              <p>Analyze!</p>
            </button>
          </div>

        </div>

        {Analysis && <div style={{ color: "whitesmoke" }}>
          <h4>Lexical Analysis</h4>
          <hr />
          The Total Tokens Created Are : {RecordsGot.length}
        </div>}

        {Analysis && <>
          <div>
            <h1 style={{ display: "block", margin: "auto", width: "fit-content", color: "white", marginTop: "20px" }}>Symbol Table Output</h1>
            <table>
              <thead>
                <tr>
                  <th>Lexeme</th>
                  <th>Token</th>
                  <th>Value</th>
                </tr>
              </thead>
              <tbody>
                {RecordsGot.map((item, index) => (
                  <tr key={index}>
                    <td>{item.lexeme}</td>
                    <td>{item.token}</td>
                    <td>{item.value}</td>
                  </tr>
                ))}
              </tbody>
            </table>
          </div>
        </>}

        {Analysis && <h1 style={{color:"whitesmoke",margin:'auto',width:"fit-content"}}>Lexemes Output</h1>}
        <div className='mainDiv'>
          {RecordsGot && RecordsGot.map((val) => {
            return (<>

              <div className="card work">
                <div className="img-section">
                </div>
                <div className="card-desc">
                  <div className="card-header">
                    <div className="card-title">{val.lexeme}</div>
                    <div className="card-menu">
                      <div className="dot"></div>
                    </div>
                  </div>
                  <div className="card-time">{val.token}</div>
                </div></div>
            </>)
          })}
        </div>
      </div>

      {Analysis && <>
        <div style={{ color: "whitesmoke",marginTop:"50px"}}>
          <h1 style={{display:'block',width:'fit-content',margin:'auto'}}>Summary Lexical Analysis</h1>
          <hr style={{width:'fit-content'}}/>

          <div className='gridcontanier'>
            
            <div className="card1234 item">
              <div className="card-content1234">
                <p className="card-title1234">Punctuators
                </p><p className="card-para1234">{punctuatorCount}</p>
              </div>
            </div>

            <div className="card1234 item">
              <div className="card-content1234">
                <p className="card-title1234">Operators
                </p><p className="card-para1234">{operatorCount}</p>
              </div>
            </div>

            <div className="card1234 item">
              <div className="card-content1234">
                <p className="card-title1234">Identifiers
                </p><p className="card-para1234">{identifierCount}</p>
              </div>
            </div>


            <div className="card1234 item">
              <div className="card-content1234">
                <p className="card-title1234">KeyWords
                </p><p className="card-para1234">{keywordCount}</p>
              </div>
            </div>



          </div>

        </div>
      </>
      }


    </>
  )
}

export default Lex
