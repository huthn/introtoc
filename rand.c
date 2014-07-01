#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	srand(time(NULL));
	int d = rand();
	int guess = 1;
	int num;
	int random = 11;

	while (guess<11) {
		printf("Guess a number. You have %d  guesses!\n",random - guess );
		printf("%d \n", d);
		scanf("%d", &num);
		if (num == d) {
			printf("You are correct!\n");
			break;
		} else {
			printf("You are wrong \n");
		}
		guess++;
		if (guess == 0) {
			printf("Game over");
			break;
		}
	}
	return 0;
}
