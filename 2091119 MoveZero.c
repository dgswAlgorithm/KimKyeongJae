#include <stdio.h>

void main() {
	int arr[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
	int length = sizeof(arr) / sizeof(int);
	int* result = (int*)malloc(sizeof(arr));

	int top = 0;
	int zeroCount = 0;
	int i;

	for (i = 0; i < length; i++) {
		if (arr[i] == 0) {
			result[length - ++zeroCount] = 0;
		}
		else {
			result[top++] = arr[i];
		}
	}
	

	// prints arr
	for (i = 0; i < length; i++) {
		printf("%d, ", result[i]);
	}
	printf("\n");

}