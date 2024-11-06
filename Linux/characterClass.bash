#!/bin/bash

# Create some sample files for demonstration
touch file1.txt file2.txt file3.txt fileA.txt fileB.txt fileC.txt file10.txt file.txt filea.txt fileb.txt filec.txt file_1.txt file_2.txt file 3.txt image_1.png image_2.jpg image_123.gif

# Example 1: Digit and Space
echo "Example 1: Digit and Space"
ls file[[:digit:][:space:]].txt
echo

# Example 2: Uppercase and Lowercase Letters
echo "Example 2: Uppercase and Lowercase Letters"
ls file[[:upper:][:lower:]].txt
echo

# Example 3: Alphanumeric
echo "Example 3: Alphanumeric"
ls file[[:alnum:]].txt
echo

# Example 4: Whitespace
echo "Example 4: Whitespace"
ls file[[:space:]].txt
echo

# Example 5: Punctuation
echo "Example 5: Punctuation"
ls file[[:punct:]].txt
echo

# Example 6: Hexadecimal Digits
echo "Example 6: Hexadecimal Digits"
ls file[[:xdigit:]].txt
echo

# Example 7: Control Characters
echo "Example 7: Control Characters"
ls file[[:cntrl:]].txt
echo

# Example 8: Range of Digits
echo "Example 8: Range of Digits"
ls file[0-9].txt
echo

# Example 9: Range of Alphabets
echo "Example 9: Range of Alphabets"
ls file[a-z].txt
echo

# Example 10: Negation - Not a Digit
echo "Example 10: Negation - Not a Digit"
ls file[![:digit:]].txt
echo

# Clean up sample files
rm *.txt *.png *.jpg *.gif
