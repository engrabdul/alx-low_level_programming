#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
for(int x = A; x <= Z; x++)
{
x = tolower(x);
putchar(x);
}
return 0;
}
