#include <stdio.h>
/**
* main
*
* Description: using the main function print "desired result"
*
* Return: Always  0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
