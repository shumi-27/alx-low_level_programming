#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates a string.
 * @str : string to duplicate.
 * Return: Pointer to duplicate string.
 */
char *_strdup(char *str)
{
	int n = 0;
	char *arr, *arr2, *dup = str;

	if (str == 0)
	{
		return (0);
	}
	while(*dup != '\0')
	{
		n++;
		dup++;
	}
	arr = malloc(sizeof(char) * n);
	arr2 = arr;
	if (arr == 0)
	{
		return (0);
	}
	while (*str != '\0')
	{
		*arr = *str;
		arr++;
		str++;
	}
	*arr = '\0';
	return (arr2);
}
