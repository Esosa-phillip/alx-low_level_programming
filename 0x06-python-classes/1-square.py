#!/usr/bin/python3
"""Define a square with private"""


class Square:
    """Represents a square"""

    def __init__(self, size):
        """Initializes a Square.
        Args:
        size(int): size of a new square."""
        self.__size = size
