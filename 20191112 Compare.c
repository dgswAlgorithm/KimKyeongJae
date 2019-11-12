#include <stdio.h>

#define SIZE 100

void main() {

	int arr[SIZE] = { 0, -3, 5, -4, -2, 3, 1, 0 };
	int answer[SIZE];
	int top = 0;
	int len = 8;
	int i, j;
	/*
	scanf_s("%d", &len);

	for (i = 0; i < len; i++) {
		scanf_s("%d", &arr[i]);
	}
	*/
	for (i = 0; i < len; i++) {
		int val1 = 0;
		int val2 = 0;
		for (j = i+1; j < len; j++) {
			val1 += arr[j];
		}
		for (j = i - 1; j >= 0; j--) {
			val2 += arr[j];
		}
		if (val1 == val2) {
			answer[top++] = i;
		}
	}

	for (i = 0; i < top; i++) {
		printf("%d, ", answer[i]);
	}
	printf("\n");


}