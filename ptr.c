#include <stdio.h>

int main(int argc, const char *argv[])
{

	int a = 2;
	int *p = &a;
	int c[4] = {23, 12, 1, 0};

	int *array_p;

	printf("address of a = %p \n", p);
	printf("address of p = %p \n", &p);
	
	array_p = c;

	printf("The number is: %d \n", c[1]);
	printf("The num is: %d \n", *(array_p + 1));

	return 0;
}
