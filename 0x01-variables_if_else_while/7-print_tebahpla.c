#include <stdio.h>
/**
 * main - Printing the alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char im;
for (im = 'z'; im >= 'a'; im--)
	putchar(im);
putchar('\n');
return (0);
}
