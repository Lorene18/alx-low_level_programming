#include <stdio.h>
/**
 * main A program that prints the size of various computer types
 * Return 0 (Succes)
 */
int main(void)
{
	printf("size of a char: %lu byte(S)", sizeof(char));
	printf("size of an int: %lu byte(S)", sizeof(int));
	printf("size of a long int: %lu byte(S)", sizeof(long int));
	printf("size of a long long int: %lu byte(S)", sizeof(long long int));
	printf("size of a float: %lu byte(S)", sizeof(float));
	return (0);
}
