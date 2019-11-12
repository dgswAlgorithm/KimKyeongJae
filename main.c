#include <stdio.h>

#define SIZE 100
#define SWAP(a, b) int t=a;a=b;b=t;

void main() {
	int arr[SIZE];
	int len;
	int i;
	
	scanf_s("%d", &len);

	for (i = 0; i < len; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	for (i = 1; i < len-1; i += 2) {
		if (arr[i+1] > arr[i] && arr[i + 1] > arr[i - 1]) {
			SWAP(arr[i], arr[i + 1]);
		}
		else if (arr[i - 1] > arr[i] && arr[i - 1] > arr[i + 1]) {
			SWAP(arr[i], arr[i - 1]);
		}
	}

	for (i = 0; i < len; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");

}
