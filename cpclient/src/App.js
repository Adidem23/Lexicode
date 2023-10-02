import React from 'react';
import Render from './Components/Render';
import Lex from './Components/Lex';
import { Routes, Route } from 'react-router-dom';

function App() {
  return (
    <>
      <Routes>
        <Route path='/' Component={Render} />
        <Route path='/lex' Component={Lex} />
      </Routes>
    </>
  );
}

export default App;
