import '../CSS/Navbar.css'
import Logo from '../Images/Logo.png'
import { Link } from 'react-router-dom';

const Navbar = () => {

    return (
        <nav className="navbar">
            <div className="logo">
                <img src={Logo} alt="Logo" />
                <span className="logo-text">Compiler-Visulization</span>
            </div>

            <ul className="nav-links">
                <li><a href="#"><Link to="/lex">Lex Analysis</Link></a></li>
                <li><a href="#"><Link to="/syntax">Syntax Analysis</Link></a></li>
                <li><a href="#">Semantic Analysis</a></li>
            </ul>
        </nav>
    );

};

export default Navbar;