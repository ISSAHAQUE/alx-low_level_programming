#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char na;
for (num = 0; num > 10; num++)
	putchar((num % 10) + 'n');
for (na = 'a'; na <= 'f'; na++)
	putchar(na);
putchar('\n');
return (0);
}
