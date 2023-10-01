import React from 'react';
import axios from 'axios';
import { useState } from 'react';

function App() {

  const [Text, SetText] = useState(null);

  const handleterminalComm = async (e) => {
    e.preventDefault();
    try {
      axios.post("http://localhost:7000/dothing", { TextFile: Text }).then((res) => {
        console.log(res.data)
      }).catch((err) => {
        console.log(`${err} is Occured`)
      })
    } catch (err) {
      console.log(`${err} is Occured`)
    }

  }

  return (
    <>
      <textarea onChange={(e) => { SetText(e.target.value) }}></textarea>
      <br />
      <br />
      <button onClick={handleterminalComm}>Analyze</button>
    </>
  );
}

export default App;
