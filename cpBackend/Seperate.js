const fs = require('fs');

// Read the input text from a file
const inputFileName = 'ICG.txt'; // Replace with the file name
const targetLine = 'Status: Parsing Complete - Valid [0m';

let textBeforeTargetLine = [];

const readStream = fs.createReadStream(inputFileName, 'utf8');

readStream.on('data', (chunk) => {
  const lines = chunk.split(/\r?\n/); // Handle both Windows and Unix line endings

  for (const line of lines) {
    if (line.includes(targetLine)) {
      readStream.close();
      break;
    }
    textBeforeTargetLine.push(line);
  }
});

readStream.on('close', () => {
  console.log('Text up to the target line:');
  console.log(textBeforeTargetLine.join('\n'));
});
