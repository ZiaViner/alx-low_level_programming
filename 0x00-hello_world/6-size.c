#include <stdio.h>

/**
* main -  prints the size of various types on the computer it is compiled and run on.
*
* Description: using the main function
* this program print various types of texts
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", Sizeof(c));
	printf("Size of an int: %ld byte(s)\n", Sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", Sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", Sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", Sizeof(f));
	return (0);
}
