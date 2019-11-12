#include <stdio.h>

#define MAX 100
#define SWAP(a, b) int n=a;a=b;b=n;

void main() {

	int arr[MAX];
	int len;
	int i;

	scanf_s("%d", &len);

	for (i = 0; i < len; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	for (i = 1; i < len-1; i += 2) {
		if (arr[i-1] < arr[i + 1])	{ SWAP(arr[i], arr[i + 1]); }
		else						{ SWAP(arr[i], arr[i - 1]); }
	}

	for (i = 0; i < len; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");

}