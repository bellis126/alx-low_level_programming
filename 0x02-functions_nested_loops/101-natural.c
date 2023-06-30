#include <stdio.h>

/**
 * main - Print the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */

int main(void)
{

int i, z = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += 1;
}
}

printf("%d\n", z);

return (0);

}
