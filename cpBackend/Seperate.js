const fs = require('fs');

// Read the input text from a file
const inputFileName = 'ICG.txt'; // Replace with the file name
const inputText = fs.readFileSync(inputFileName, 'utf8');

// Split the input text into lines
const lines = inputText.split('\n');

// Initialize a variable to store the text up to the target line
let textBeforeTargetLine = [];

// Flag to determine if we've reached the target line
let reachedTargetLine = false;

// Define the target line
const targetLine = 'Status: Parsing Complete - Valid [0m';

// Iterate through the lines and capture lines up to the target line
for (const line of lines) {
  if (!reachedTargetLine) {
    textBeforeTargetLine.push(line);
    if (line.includes(targetLine)) {
      reachedTargetLine = true;
    }
  }
}

// Output the text up to the target line
console.log('Text up to the target line:');
console.log(textBeforeTargetLine.join('\n'));
