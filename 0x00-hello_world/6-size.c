#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longlongType;
	float floatType;

printf("size of a cha:r: ℅lu byte(s)\n", (unsigned long)sizeof(charType));
printf("size of an int: ℅lu byte(s)\n", (unsigned long)sizeof(intType));
printf("size of a long int: ℅lu byte(s)\n", (unsigned long)sizeof(longType));
printf("size of a long long int: ℅lu byte(s)\n", (unsigned long)sizeof(longlongType));
printf("size of a float: ℅lu byte(s)\n", (unsigned long) sizeof(floatType));
	return (0);
}
