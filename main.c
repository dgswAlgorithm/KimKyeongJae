#include <stdio.h>
#include <stdlib.h>


#define SIZE 100


void main() {

	int arr[SIZE];
	int sameBigArea[SIZE];

	int sameBigCount = 0;
	int buffer;
	int max = 0;
	int maxindex = 0;

	int width;
	int i, j;

	// initalize
	srand(10);
	width = 1;

	// initialize
	for (i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}

	for (i = 0; i < SIZE - width; i++) {
		buffer = 0;
		
		for (j = 0; j < width; j++)
			buffer += arr[i + j];

		if (max < buffer) {
			max = buffer;
			maxindex = i;
			sameBigCount = 0;
		}
		if (max == buffer) {
			sameBigArea[sameBigCount++] = i;
		}
	}

	printf("구역 : ");
	for (i = 0; i < sameBigCount; i++) {
		printf("%d, ", sameBigArea[i]);
	}
	printf("\n잡음:%d마리\n", max);
}