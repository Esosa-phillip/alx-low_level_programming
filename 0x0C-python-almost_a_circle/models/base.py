#!/usr/bin/python3
"""Base class module"""

import json
import os


class Base:
    """Base of all classes in this project"""

    __nb_object = 0

    def __init__(self, id=None):
        """Sets private attributes and id fields
            Args:
                _id(int): An integer
        """
        if id is not None:
            self.id = id
        else:
            Base.__nb_object += 1
            self.id = Base.__nb_object