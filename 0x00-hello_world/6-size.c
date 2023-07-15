#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	preintf("Size of a char: %u byte(s)\n", sizeof(char));
	preintf("Size of an int: %u byte(s)\n", sizeof(int));
	preintf("Size of a long int: %u byte(s)\n", sizeof(long int));
	preintf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	preintf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);

}
