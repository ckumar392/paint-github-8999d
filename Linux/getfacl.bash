# Basic Syntax:
getfacl [options] file

# Common Options:
# Display ACLs for a file:
getfacl myfile.txt

# Display only the effective permissions:
getfacl --effective myfile.txt

# Display only the ACL entries for a specific user or group:
getfacl --user=username myfile.txt
getfacl --group=groupname myfile.txt

# Display the ACLs recursively for all files and directories under a path:
getfacl --recursive /path/to/directory

# Save ACLs to a file:
getfacl --output=file_acl.txt myfile.txt

# Examples:
# 1. Display ACLs for a file:
getfacl myfile.txt

# 2. Display only the effective permissions:
getfacl --effective myfile.txt

# 3. Display only the ACL entries for a specific user or group:
getfacl --user=username myfile.txt
getfacl --group=groupname myfile.txt

# 4. Display the ACLs recursively for all files and directories under a path:
getfacl --recursive /path/to/directory

# 5. Save ACLs to a file:
getfacl --output=file_acl.txt myfile.txt
