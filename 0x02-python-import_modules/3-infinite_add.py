#!/usr/bin/python3

if __name__ == "__main__":

    from sys import argv

    arguments = argv[1:]

    result = sum(map(int, arguments))

    print(result)
