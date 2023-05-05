#include "main.h"

/**
 * _strncat - Concatenates two strings, at most n bytes of src
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Maximum number of bytes from src to concatenate
 *
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        char *ptr = dest + _strlen(dest);
        int i = 0;

        while (i < n && *src)
        {
                *ptr++ = *src++;
                i++;
        }
        *ptr = '\0';

        return dest;
}
