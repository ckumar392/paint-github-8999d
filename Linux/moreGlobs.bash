ls -1 
# gives the listing of file directories one in a line

# let us have list of files with names having a range of numbers
# to get files that have name starting with photo and have a sequence number between 1000 and 1029

ls [pP]hoto*10[0-2][0-9]*.jpg
ls *01-13*.[mjp][pn]g
# matches the file that has names like mpg,jpg,mng etc and are from date 13h 2021
# character classes
ls photo[[:punct:]]_* #matches the files names having punctutation just after photo

ls *[!!]* #this doesn work as ! is a special character and it gets translated when we run it
ls *[!'!']* #this shows files without exclamation marks

#using brace expansion
ls *{.png,.jpg}

#we used ls [pP]hoto*10[0-2][0-9]*.jpg to find the files from 1000 to 1029.But when we try to find 1000 to 1025
ls [pP]hoto*10[0-2][0-9]*.jpg #?? doesnt work with glob
#using brace expansion
ls photo_10{00..25}*.jpg
ls photo_{1000..1025}.jpg


#other uses--> 
#increment number 7
ls photo_{1000..1025..7}.jpg #not possibles with globs

#extended globs

#1--> ?(abc) matches 0 or 1 occurance
#2--> @(abc) matches exactly 1 occurance
#3--> +(abc) matches 1 or more occurance
#4--> *(abc) matches 0 or more occurance




#try to find 1000 to 1025
photo_10@(0[0-9]|1[0-91|2[0-5])*.jpg