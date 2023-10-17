import '../CSS/Navbar.css'
import Logo from '../Images/Logo.png'
const Navbar = () => {

    return (
        <nav className="navbar">
            <div className="logo">
                <img src={Logo} alt="Logo" />
                <span className="logo-text">Compiler-Visulization</span>
            </div>

            <ul className="nav-links">
                <li><a href="#">Lex Analysis</a></li>
                <li><a href="#">Syntax Analysis</a></li>
                <li><a href="#">Semantic Analysis</a></li>
            </ul>
        </nav>
    );

};

export default Navbar;