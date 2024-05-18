#!/bin/bash

# Check if the "build" directory exists
if [ -d "build" ]; then
	    # If it exists, delete it recursively
	        rm -rf build
		    echo "Deleted the build directory."
	    else
		        echo "The build directory does not exist."
fi

mkdir build 
cd build
cmake ..

make

./HelloWorld

echo
