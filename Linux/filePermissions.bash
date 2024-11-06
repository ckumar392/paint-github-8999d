#numeric
# read 4 write 2 execute 7
chmod 750 file.txt

#symbolic
-rwxr-x---
# - --> its the first character defines the type, if its d its a directory, hash for the file, L for symbolic link 
# groop of 3 charcters 3X3 -> ist is user owner permissions, group owner, others
chmod o-x files.txt
chmod u=rwx,g=rx,o= file.txt

#we dont have to know the current permissions to make changes but in numeric we need to know the current permissions.