#include <stdio.h>
#include <math.h>
#define ARRAY_SIZE 5

int main(int argc, const char *argv[])
{
	int a[ARRAY_SIZE][ARRAY_SIZE];
	int j, i, sum,  rand = 0;
	
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		for(j = 0; j < ARRAY_SIZE; j++) {
			*(*(a + i) + j) = rand++;
			if (j > 0)
				sum += *(*(a + i) + j);
		}
	}
	*(*(a + i)) = sum;

	for(i = 0; i < ARRAY_SIZE; i++) {
		for(j = 0; j < ARRAY_SIZE; j++) {
		printf("%d, ", *(*(a + i) + j));
		}
	}

	return 0;
}

