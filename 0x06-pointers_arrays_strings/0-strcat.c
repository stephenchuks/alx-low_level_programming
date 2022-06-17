#include <stdio.h>
#include "main.h"

/*
 * _strcat > This function appends the src string to the dest string, overwritin * 
 *@dest: first parameter
 *@src: second parameter
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src){
	int a = 0, i;
	while (dest[a]);
		a++;

	for (i=0; src[i] != '\0'; i++)
	{dest[a] = src[i];
		a += 1;
	}
	dest[len] = '\0];
	return (dest);
}
