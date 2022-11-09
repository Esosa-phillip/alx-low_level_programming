#!/usr/bin/python3
<<<<<<< HEAD
"""contains the class BaseGeometry and
the subclass Rectangle"""


=======
>>>>>>> c3bb1ccb066803849621851d10ff99a0e560b202
BaseGeometry = __import__('7-base_geometry').BaseGeometry


class Rectangle(BaseGeometry):
    """a representation of a rectangle"""
    def __init__(self, width, height):
        """instantiation of the rectangle"""
        self.integer_validator("width", width)
        self.__width = width
<<<<<<< HEAD
        self.integer_validator("height", height)
        self.__height = height
=======
        self.__height = height
>>>>>>> c3bb1ccb066803849621851d10ff99a0e560b202
