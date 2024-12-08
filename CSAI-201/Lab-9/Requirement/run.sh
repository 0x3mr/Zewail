#!/bin/bash

set -e # Ensure the script exits on error

echo " "

cd "$(dirname "$0")"

make -f Makefile

./program
