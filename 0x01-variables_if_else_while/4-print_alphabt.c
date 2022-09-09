#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
for (c = a; c <= z; ++c)
if (c != e && c != q)
{
printf("%c", c);
}        
return (0);
}
