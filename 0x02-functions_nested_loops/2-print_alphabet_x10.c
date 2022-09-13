#include main.h

/**
<<<<<<< HEAD
 * print_alphabet_x10 - Make alphabet x10 times
=======
 * main - check the code.
>>>>>>> 6de0ffe7babfb051c579264d3b960af4fe670541
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

_putchar('\n');

i++;
}
}
