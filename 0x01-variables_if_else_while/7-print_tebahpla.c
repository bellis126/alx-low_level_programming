#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int f;

for (f = 'z'; f >= 'a'; f--)
{
putchar(f);
}
putchar('\n');
return (0);
}
