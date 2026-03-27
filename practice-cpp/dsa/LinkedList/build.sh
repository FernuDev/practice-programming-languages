#/bin/bash

# Navigate to the build directory
cd build/

# Compiling the project
cmake ..
make

# Clear the STD out
clear

# Executing it
./LinkedList