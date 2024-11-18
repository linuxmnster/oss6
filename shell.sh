#!/bin/bash

# Prompt the user to enter the directory path
echo "Enter the directory path:"
read directory

# Check if the directory exists
if [ -d "$directory" ]; then
    echo "Files in $directory:"
    # List all files in the directory
    ls -l "$directory" | grep "^-"  # Lists only files (not directories)
else
    echo "Directory does not exist!"
fi
