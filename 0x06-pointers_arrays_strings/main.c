#include "main.h"
#include <stdio.h>

int main(void)
{
        char s1[100] = "Hello ";
        char s2[] = "world!";

        _strncat(s1, s2, 3);
        printf("%s\n", s1);
        return (0);
}
