#!/bin/bash

YELLOW='\033[0;33m'
NC='\033[0m' # No Color

# CMake unit_tests
echo -e "${YELLOW}CMake build unit tests...${NC}"
cd ./CSDLib
cd ./unit_tests
mkdir build
cd build
cmake ..
make
echo -e "${YELLOW}CMake unit tests created succesfully !${NC}"
./unit_tests
echo -e "${YELLOW}CMake unit tests executed succesfully !${NC}"