#!/usr/bin/python3
import sys

def safe_print_integer_err(value):
    """Prints an integer and returns True if successful, otherwise False.

    Args:
        value: The value to print.

    Returns:
        True if value is an integer and was printed successfully, False otherwise.
    """
    try:
        print("{:d}".format(value))
        return True
    except Exception as e:
        print("Exception:", e, file=sys.stderr)
        return False
