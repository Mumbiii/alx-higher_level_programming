#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    """Executes a function safely and returns the result.

    Args:
        fct: The function to execute.
        *args: Any arguments to be passed to the function.

    Returns:
        The result of the function if successful, otherwise None and
        prints the error to stderr.
    """
    try:
        result = fct(*args)
        return result
    except Exception as e:
        print("Exception:", e, file=sys.stderr)
        return None
