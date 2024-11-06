#Create a new file and updates both atime and mtime
touch myfile.txt

# View the timestamps
stat myfile.txt

# Update access time only
touch -a myfile.txt

# Update modification time only
touch -m myfile.txt

# View the timestamps again
stat myfile.txt

