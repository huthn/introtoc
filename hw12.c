#include <stdio.h>
#include <math.h>

long int printer(long int x);

int main(int argc, const char *argv[])
{
	long int num;
	printf("Hello welcome to the Octal Calculator \n");
	printf("Input any number to find it's octal equivalent: ");
	scanf("%ld", &num);
	printer(num);

	return 0;
}

long int printer(long int x) {

	long int remainder[50];
	long int rand = 0;
	long int length = 0;

	while(x>0) {
		remainder[rand] = x  % 8;
		x = x/8;
		rand++;
		length++;
	}

	printf("The number is: ");
		for(rand = length-1; rand >= 0; rand--) {
			printf("%ld  ", remainder[rand]);
		}
	printf("      \n");

}
