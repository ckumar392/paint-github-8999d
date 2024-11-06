# Grant read and write access to a specific user
setfacl -m u:username:rw- myfile.txt

# Remove specific user's ACL entry
setfacl -x u:username myfile.txt

# Remove all ACL entries (restore default permissions)
setfacl -b myfile.txt

# Apply changes recursively to all files and directories under a path
setfacl -R -m g:group:r-- /path/to/directory

# Set a mask to limit group and others' permissions
setfacl -m m::rwx file

# Add multiple ACL entries at once
setfacl -m u:user1:rw-,u:user2:rx file

# View the current ACLs of a file
getfacl myfile.txt

# Set default ACL for a directory (applies to newly created files and directories)
setfacl -d -m g:group:rw /path/to/directory

# Copy ACL from one file to another
getfacl sourcefile | setfacl --set-file=- targetfile

# Display help and usage information
setfacl --help
