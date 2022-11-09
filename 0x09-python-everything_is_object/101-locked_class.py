#!/usr/bin/python3
"""LockedClass"""


class LockedClass:
    """A class that can have only one attribute
    Attribute:
        first_name(str): First Name
    """
    __slots__ = "first_name"
