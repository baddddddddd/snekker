import path from 'path';
import fs from 'fs';

import { fileURLToPath } from 'url';

// Getting the current directory path
const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

const concepts = [
    "variables",
    "if-statements",
    "while-loops",
    "for-loops",
    "foreach-loops",
    "functions",
    "arrays",
    "strings",
]

const languages = {
    "python": {
        "name": "Python",
        "extension": "py",
    },
    "c": {
        name: "C",
        extension: "c",
    },
    "cpp": {
        name: "C++",
        extension: "cpp",
    },
    "csharp": {
        name: "C#",
        extension: "cs",
    },
    "java": {
        name: "Java",
        extension: "java",
    },
    "javascript": {
        name: "JavaScript",
        extension: "js",
    },
}

let snippets = {};

for (let concept of concepts) {
    snippets[concept] = {}

    for (let language of Object.keys(languages)) {
        const filePath = path.join(__dirname, `/src/data/snippets/${concept}/snippet.${languages[language].extension}`);
        try {
            // Reading the file synchronously
            const data = fs.readFileSync(filePath, 'utf8');
            snippets[concept][language] = data.trim();
        } catch (err) {
            console.error('Error reading file:', err);
        }
    }
}

const jsonData = JSON.stringify(snippets, null, 2)

const jsonFile = path.join(__dirname, `/src/data/snippets.json`);

try {
    fs.writeFileSync(jsonFile, jsonData, 'utf8');
    console.log('File has been written successfully.');
} catch (err) {
    console.error('Error writing file:', err);
}