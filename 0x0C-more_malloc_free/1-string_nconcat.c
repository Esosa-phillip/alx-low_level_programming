#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * 
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *south;
    unsigned int as1, as2, asouth, j;

    if (s1 == NULL)
    {
        s1 = "";
    }

    if (s2 == NULL)
    {
        s2 = "";
    }

    for (as1 = 0; s1[as1] != '\0'; as1++)
    {
        ;
    }

    for (as2 = 0; s2[as2] != '\0'; as2++)
    {
        ;
    }

    if (n > as2)
    {
        n = as2;
    }

    asouth = as1 + n;

    south = malloc(asouth + 1);

    if (south == NULL)
    {
        return (NULL);
    }

    for (j = 0; j < asouth; j++)
    {
        if (j < as1)
        {
            south[j] = s1[j];
        }
        else
        {
            south[j] = s2[j - as1];
        }
    }
    south[j] = '\0';

    return (south);
}