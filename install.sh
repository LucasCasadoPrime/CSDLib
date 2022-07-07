#!/bin/bash

RED='\033[0;31m'
BLUE='\033[0;34m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
NC='\033[0m' # No Color

# Install dependencies
echo -e "${YELLOW}Installing dependencies...${NC}"
sudo apt-get update
sudo apt-get install -y build-essential cmake manpages-dev

# CMake source project
clear
echo -e "${YELLOW}Downloading CMake source...${NC}"
# Check if buld directory exists
if [ -d "build" ]; then
    echo -e "${YELLOW}Removing old build directory...${NC}"
    rm -rf build
fi
mkdir build
cd build
cmake ..
make
echo -e "${YELLOW}Cmake shared lib created succesfully !${NC}"

# CMake install lib
echo -e "${YELLOW}Installing CMake library...${NC}"
sudo make install
echo -e "${GREEN}Refresh shared lib cache.${NC}"
sudo ldconfig
echo -e "${YELLOW}CMake library installed succesfully !${NC}"

# print mydoc-CSDLib
echo -e "${YELLOW}Build mydoc_CSDLib...${NC}"
cd ../doc/.mydoc_CSDLib
echo -e "${YELLOW}Printing mydoc_CSDLib...${NC}"
make && ./mydoc_CSDLib
echo -e "${YELLOW}Print mydoc_CSDLib succesfully !${NC}"