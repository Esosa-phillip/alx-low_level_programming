#!/usr/bin/python3
"""
This module is composed by a function to print a square with a character #
"""


def print_square(size):
    """ Function that prints a square with a character #

    Args:
        size: size of square printed

    Return:
        No return

    Raises:
        TypeError: If size is not an integer
    """

    if not isinstance(size, int):
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")

    for i in range(size):
        print("#" * size)
