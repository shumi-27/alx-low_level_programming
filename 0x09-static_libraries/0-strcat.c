#include "main.h"
/**
 * *_strcat - appends the src string to the dest string.
 * @dest : dest string.
 * @src :  src string.
 * Return: String.
 */
char *_strcat(char *dest, char *src)
{
	char *temps, *tempd;

	temps = src;
	tempd = dest;
	while (*tempd != '\0')
	{
		tempd++;
	}
	while (*temps != '\0')
	{
		*tempd = *temps;
		tempd++;
		temps++;
	}
	*tempd = '\0';
	return (dest);
}
