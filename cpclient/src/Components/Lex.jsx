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
    alert("File Submitted Sucessfully!!");
    try {
      axios.post("http://localhost:8000/dothing", { TextFile: Text }).then((res) => {
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
    axios.get("http://localhost:8000/records").then((res) => {
      SetRecordsGot(res.data);
      console.log(res.data);
      alert("Tokens Are Created!!")
    }).catch((err) => {
      console.log(`${err} is Occured`)

    })

  }

  return (
    <>
      <div style={{ display: "block", margin: "auto", width: "fit-content", justifyContent: "center" }}>

        <h2 className="heading-style-h1">Lex Analysis</h2>
        <textarea onChange={(e) => { SetText(e.target.value) }} style={{ height: "50vh", width: "100vh", marginTop: "50px", backgroundColor: "#393646", color: "whitesmoke", resize: 'none', border: "3px solid black", }}></textarea>
        <br />
        <br />
        <button onClick={handleterminalComm}>
          <p>Submit!</p>
        </button>
        <br />
        <br />
        <button onClick={GetRecordsFromBackend}>
          <p>Analyze!</p>
        </button>
        <br />
        <br />
        
        {Analysis && <div style={{ color: "whitesmoke" }}>
          <h4>Result After Analysis</h4>
          <hr />
          The Total Tokens Created Are : {RecordsGot.length}
        </div>}

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

    </>
  )
}

export default Lex
