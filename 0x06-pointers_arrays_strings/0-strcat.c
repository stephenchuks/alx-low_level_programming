#include "main.h"
#include <stdio.h>
#include <string.h>


/*
 * _strcat > This function appends the src string to the dest string, overwritin * 
 *@dest: first parameter
 *@src: second parameter
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
