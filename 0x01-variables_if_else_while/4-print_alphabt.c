#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
for (char letter = a; letter <= z; letter++)
{
if (letter != e && letter != q)
putchar(letter);
}

putchar(n);

return (0);
}
