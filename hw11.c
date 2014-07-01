#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	char rand;
	char rand1 ='y';

	printf("Hello, Welcome to the game \n");
	printf("Type y to play and n to leave: ");
	scanf("%c", &rand);
	
	if(rand == rand1) { printer(); }
	else {printf("You dick"); }
	
	return 0;
}

int printer() {

	int i = 32;
	int counter;

	while(i < 128)
	{
		printf("The ASCII value of %d is: %c \n ", i, i);
		i++;
	}
}
