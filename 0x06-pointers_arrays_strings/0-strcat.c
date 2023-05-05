cat 0-main.c
#include "main.h"
#include <stdio.h>
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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
  ./0-strcat
 Hello 
World!
Hello World!
World!
Hello World!
  
