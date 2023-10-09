import React from 'react'
import '../CSS/Lex.css'
import { useState } from 'react'
import axios from 'axios';

const Syntax = () => {

  const [Text, setText] = useState(null);
  const [ErrorS, setErrorS] = useState("");
  const [Analysis, setAnalysis] = useState(false);


  const SubmitFiletoSyntax = async (e) => {
    e.preventDefault();
    alert("File to Syntax Analyzer");

    try {
      axios.post("http://localhost:8000/writeSyntaxFile", { TextFile: Text }).then((res) => {
        console.log(res.data);
        setErrorS(res.data);
      }).catch((err) => {
        alert(`${err} is Occured!!`);
      })
    } catch (err) {
      alert(`${err} is Occured!!`)
    }

  }

  const CheckSyntax = async (e) => {
    e.preventDefault();
    setAnalysis(true);
    try {
      axios.post("http://localhost:8000/AnalyzeText", { TextFile: Text }).then((res) => {
        console.log(JSON.stringify(res.data));
        setErrorS(JSON.stringify(res.data))
      }).catch((err) => {
        alert(`${err} is Occured!!`);
      })
    } catch (err) {
      alert(`${err} is Occured!!`)
    }


  }

  return (
    <>
      <div style={{ display: "block", margin: "auto", width: "fit-content", justifyContent: "center" }}>

        <h2 className="heading-style-h1">Syntax Analysis</h2>
        <textarea style={{ height: "50vh", width: "100vh", marginTop: "50px", backgroundColor: "#393646", color: "whitesmoke", resize: 'none', border: "3px solid black", }} onChange={(e) => { setText(e.target.value) }}></textarea>
        <br />
        <br />
        <button onClick={SubmitFiletoSyntax}>
          <p>Submit!</p>
        </button>
        <br />
        <br />
        <button onClick={CheckSyntax}>
          <p>Analyze!</p>
        </button>
        <br />
        <br />

        {Analysis && <div style={{ color: "whitesmoke" }}>
          <h4>Result After Analysis</h4>
          <hr />
          <p>{ErrorS}</p>
        </div>}

      </div>
    </>
  )
}

export default Syntax
