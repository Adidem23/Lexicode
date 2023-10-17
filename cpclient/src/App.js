import React from 'react';
import Render from './Components/Render';
import { Routes, Route } from 'react-router-dom';

function App() {
  return (
    <>
      <Routes>
        <Route path='/' Component={Render} />
      </Routes>
    </>
  );
}

export default App;
