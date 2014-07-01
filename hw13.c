#include <stdio.h>
#include <math.h>

long int printer(long int x, long int  y) {
		
	if(y == 0) 
	{
		printf("You can't divide by zero \n");
		main();
	}
	
	long int num2 = x % y; 
	
	if(num2 == 0)
	{
		printf("yes \n");
	}
	else
	{
		printf("no \n");
	}
}

int main(int argc, const char *argv[])
{
	long int x;
	long int y;
	printf("Enter a number: ");
	scanf("%ld", &x);
	printf("Enter a number: ");
	scanf("%ld", &y);
	printer(x, y);
	return 0;
}

