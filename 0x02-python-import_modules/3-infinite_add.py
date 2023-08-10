#!/usr/bin/python3
from sys import argv

# Remove the first element which is the script name
arguments = argv[1:]

# Convert the arguments to integers and sum them
result = sum(map(int, arguments))

print(result)
