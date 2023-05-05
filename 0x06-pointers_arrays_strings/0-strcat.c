#include "main.h"
  /**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i;

    /* Find the length of dest string */
    while (*(dest + dest_len))
        dest_len++;

    /* Append the src string to the dest string */
    for (i = 0; *(src + i); i++)
        *(dest + dest_len + i) = *(src + i);

    /* Null terminate dest string */
    *(dest + dest_len + i) = '\0';

    return dest;
}
