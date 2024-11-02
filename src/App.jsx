import { useState, useEffect } from "react";
import "./App.css";
import Prism from "prismjs";
import "prismjs/themes/prism-tomorrow.css";
import "prismjs/components/prism-python";
import "prismjs/components/prism-c";
import "prismjs/components/prism-cpp";
import "prismjs/components/prism-csharp";
import "prismjs/components/prism-java";
import "prismjs/components/prism-javascript";

import data from './data/snippets.json';



// Define the code snippets for each concept and language
const codeSnippets = data;

const CodeBlock = ({ code, language }) => {
  useEffect(() => {
    Prism.highlightAll();
  }, [code, language]);

  const language_names = {
    "c": "C",
    "cpp": "C++",
    "csharp": "C#",
    "java": "Java",
    "javascript": "JavaScript",
    "python": "Python",
  }

  return (
    <div className="code-display">
      <h2>{language_names[language]}</h2>
      <pre>
        <code className={`language-${language}`}>{code}</code>
      </pre>
    </div>
  );
};

function App() {
  const [selectedConcept, setSelectedConcept] = useState("variables");
  const [selectedLanguage1, setSelectedLanguage1] = useState("python");
  const [selectedLanguage2, setSelectedLanguage2] = useState("c");

  const handleConceptChange = (event) => {
    setSelectedConcept(event.target.value);
  };

  const handleLanguage1Change = (event) => {
    setSelectedLanguage1(event.target.value);
  };

  const handleLanguage2Change = (event) => {
    setSelectedLanguage2(event.target.value);
  };

  return (
    
    <div className="App">
      <h1>Code Snippets</h1>

      {/* Concept Dropdown */}
      <label>
        Select Concept:
        <select value={selectedConcept} onChange={handleConceptChange}>
          <option value="variables">Variables</option>
          <option value="if-statements">If Statements</option>
          <option value="while-loops">While Loops</option>
          <option value="for-loops">For Loops</option>
          <option value="foreach-loops">For-Each Loops</option>
          <option value="functions">Functions</option>
          <option value="arrays">Arrays</option>
          <option value="strings">Strings</option>
        </select>
      </label>

      {/* First Language Dropdown */}
      <label>
        Select Language 1:
        <select value={selectedLanguage1} onChange={handleLanguage1Change}>
          <option value="python">Python</option>
          <option value="c">C</option>
          <option value="cpp">C++</option>
          <option value="csharp">C#</option>
          <option value="java">Java</option>
          <option value="javascript">JavaScript</option>
        </select>
      </label>

      {/* Second Language Dropdown */}
      <label>
        Select Language 2:
        <select value={selectedLanguage2} onChange={handleLanguage2Change}>
        <option value="python">Python</option>
          <option value="c">C</option>
          <option value="cpp">C++</option>
          <option value="csharp">C#</option>
          <option value="java">Java</option>
          <option value="javascript">JavaScript</option>
        </select>
      </label>

      {/* Code Display */}
      <div className="code-container">
        <CodeBlock
          language={selectedLanguage1}
          code={codeSnippets[selectedConcept][selectedLanguage1]}
        />
        <CodeBlock
          language={selectedLanguage2}
          code={codeSnippets[selectedConcept][selectedLanguage2]}
        />
      </div>
    </div>
  );
}

export default App;
