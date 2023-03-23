#include <stdio.h>
/**
 * main - C program that prints the size of various types
 * Return 0 (correct)
 */
int main(void)
{
	char z;
	int y;
	long int x;
	long long int w;
	float v;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(v));
return (0);
}
