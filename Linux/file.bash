#!/bin/bash

# Creating files and directories
echo "Creating files and directories..."
touch file1.txt file2.txt
mkdir dir1 dir2

# Copying files and directories
echo "Copying files and directories..."
cp file1.txt file1_copy.txt
cp -r dir1 dir1_copy

# Moving and renaming files and directories
echo "Moving and renaming files and directories..."
mv file2.txt dir1/
mv dir2 dir1/dir2_renamed


# Specified move command
echo "Specified move command: Moving 'document.txt' from the home directory to /media/usbdrive/."
mv -uf --verbose ~/document.txt /media/usbdrive/


# Deleting files and directories
echo "Deleting files and directories..."
rm file1.txt
rm -r dir1_copy

# Creating links to files and directories
echo "Creating links to files and directories..."
ln -s file1_copy.txt file1_link
ln -s dir1 dir1_link

# Making file manipulation safe
echo "Making file manipulation safe..."
cp file1_copy.txt file1_backup.txt

# Listing contents after operations
echo "Listing contents after operations..."
ls -l

# Clean up created files and directories
echo "Cleaning up..."
rm file1_copy.txt file1_backup.txt file1_link
rm -r dir1 dir1_link

echo "Operations completed."
