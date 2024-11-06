#!/bin/bash

# Create some sample files for demonstration
touch file1.txt file2.txt file3.txt fileA.txt fileB.txt fileC.txt file10.txt file.txt filea.txt fileb.txt filec.txt image_1.png image_2.jpg image_123.gif

# 1. Asterisk (*) - Matches zero or more characters
echo "1. Asterisk (*) - Matches zero or more characters:"
ls *.txt
ls file*
ls *file*
echo

# 2. Question mark (?) - Matches any single character
echo "2. Question mark (?) - Matches any single character:"
ls file?.txt
ls file?.*
echo

# 3. Square Brackets ([]) - Matches any one character specified inside the brackets
echo "3. Square Brackets ([]) - Matches any one character specified inside the brackets:"
ls file[123].txt
ls [abc]*
echo

# 4. Range (-) inside Square Brackets - Matches any one character within the specified range
echo "4. Range (-) inside Square Brackets - Matches any one character within the specified range:"
ls file[0-9].txt
ls file[a-z].txt
echo

# 5. Exclusion ([!]) - Matches any character except those specified inside the brackets
echo "5. Exclusion ([!]) - Matches any character except those specified inside the brackets:"
ls file[!0-9].txt
ls file[!aeiou].txt
echo

# 6. Number Sign (#) - Matches zero or more digits
echo "6. Number Sign (#) - Matches zero or more digits:"
ls file#.txt
ls image#_*
echo

# 7. Negation (!) with Square Brackets - Matches any character not listed inside the brackets
echo "7. Negation (!) with Square Brackets - Matches any character not listed inside the brackets:"
ls file[!aeiou].txt
ls [!0-9]*
echo

# 1. Square Brackets ([]) with Range (-) - Matches any one lowercase character within the specified range
echo "8. Square Brackets ([]) with Range (-) - Matches any one lowercase character within the specified range:"
ls file[a-z].txt
echo

# 2. Square Brackets ([]) with Range (-) - Matches any one lowercase or uppercase character within the specified range
echo "9. Square Brackets ([]) with Range (-) - Matches any one lowercase or uppercase character within the specified range:"
ls file[a-zA-Z].txt
echo

# 3. Square Brackets ([]) with Range (-) - Matches any one character that is a hyphen or digit
echo "10. Square Brackets ([]) with Range (-) - Matches any one character that is a hyphen or digit:"
ls file[-0-9].txt
echo

# Clean up sample files
rm *.txt *.png *.jpg *.gif
