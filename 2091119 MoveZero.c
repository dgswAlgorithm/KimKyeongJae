#include <stdio.h>

void main() {
	int arr[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
	int length = sizeof(arr) / sizeof(int);

	int zeroCount = 0;
	int i;

	for (i = 0; i < length; i++) {
		if (arr[i] == 0) {
			zeroCount++;
		}
		else {
			arr[i - zeroCount] = arr[i];
		}
	}
	
	// prints arr
	for (i = 0; i < length-zeroCount; i++) {
		printf("%d, ", arr[i]);
	}
	for (i = 0; i < zeroCount; i++) {
		printf("0, ");
	}
	printf("\n");

}
