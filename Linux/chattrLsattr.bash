# Basic Syntax:
# chattr [options] file
# lsattr [file]

# Common Attributes:
# Immutable (i): Prevents a file from being modified, deleted, or renamed, even by the root user.
# Append-only (a): Only allows appending data to the file; existing data cannot be modified or deleted.
# No dump (d): The file will not be included in system backups using the dump command.
# No atime updates (A): Disables access time (atime) updates for the file.
# Compression (c): Compresses the file on the fly.
# No compression (C): Disables compression for the file.
# Secure deletion (s): Ensures that data blocks of the file are overwritten when deleted.
# Immutable and append-only (ia): Combines immutable and append-only attributes.

# Common Options for chattr:
# Set file attributes:
chattr +attribute file.txt
# Example: chattr +i file.txt

# Remove file attributes:
chattr -attribute file.txt
# Example: chattr -i file.txt

# List attributes of a file:
lsattr file.txt
# Example: lsattr file.txt

# Examples:
# 1. Set the immutable attribute for a file:
# chattr +i file.txt

# 2. Remove the immutable attribute from a file:
# chattr -i file.txt

# 3. List attributes of a file:
# lsattr file.txt
