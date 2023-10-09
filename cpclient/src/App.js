import React from 'react';
import Render from './Components/Render';
import Lex from './Components/Lex';
import { Routes, Route } from 'react-router-dom';
import Syntax from './Components/Syntax';

function App() {
  return (
    <>
      <Routes>
        <Route path='/' Component={Render} />
        <Route path='/lex' Component={Lex} />
        <Route path='/syntax' Component={Syntax} />
      </Routes>
    </>
  );
}

export default App;
