import React from 'react'
import axios from 'axios'

const ICG = () => {


          const Text=`
          #include<stdio.h>
          
          void myfunc(int a)
          {
              return a;
          }
          
          void main()
          {
              int i,n;
          
              myfunc(i);
              
          }`

          const makereq = async () => {

                    // axios.post("http://localhost:8500/generateICG", { TextFile:Text}).then((res) => {
                    //           console.log(res.data)
                    // }).catch((err) => {
                    //           console.log(`${err} is Occured`)
                    // })

                    axios.get("http://localhost:8500/giveResult").then((res)=>{
                        console.log("Code Output is : " +res.data);
                    }).catch((err)=>{
                        console.log("Error is: "+err);
                    })
          }


          return (
                    <div>
                              <button onClick={makereq}>Genearte</button>
                    </div>
          )
}

export default ICG
