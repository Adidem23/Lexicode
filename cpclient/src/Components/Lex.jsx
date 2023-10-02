import React from 'react'
import axios from 'axios';
import { useState } from 'react';

const Lex = () => {

          const [Text, SetText] = useState(null);
          const [RecordsGot, SetRecordsGot] = useState([]);

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

          const GetRecordsFromBackend = async () => {
                    axios.get("http://localhost:7000/records").then((res) => {
                              console.log(res.data);
                              SetRecordsGot(res.data);
                    }).catch((err) => {
                              console.log(`${err} is Occured`)

                    })

          }

          return (
                    <>
                              <div style={{ display: "block", margin: "auto", width: "fit-content" }}>
                                        <h4>Lex Analysis</h4>
                                        <textarea onChange={(e) => { SetText(e.target.value) }}></textarea>
                                        <br />
                                        <br />
                                        <button onClick={handleterminalComm}>Submit</button>
                                        <br />
                                        <br />
                                        <button onClick={GetRecordsFromBackend}>Analyze</button>
                                        <br />
                                        <br />

                                        <div>The Total Array Length is {RecordsGot.length}</div>
                              </div>

                    </>
          )
}

export default Lex
