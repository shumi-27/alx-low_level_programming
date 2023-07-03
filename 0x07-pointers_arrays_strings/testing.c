#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    char *str, *acc2;
    unsigned int i = 0, j = 0, c;
    str = s;
    acc2 = accept;
    while(*acc2 != '\0')
    {
        i++;
        acc2++;
    }
    while(*str != ',')
    {
        for (c = 0; c < i; c++)
        {
            if (*str == accept[c])
            {
                j++;
            }
        }
        str++;
    }
    return (j);
}
