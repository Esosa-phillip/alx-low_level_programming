#!/usr/bin/python3
def print_last_digit(number):
    if number >= 0:
        l_dig = number % 10
    else:
        l_dig = number % -10
        l_dig *= -1

    print("{:d}".format(l_dig), end='')
    return (l_dig)
