#include <stdio.h>

void main() {
	int arr[] = { 0,0,1,1,0,1,1,1,0,1,1,1 };
	int len = sizeof(arr) / sizeof(int);
	int prevlen = 0;
	int nowlen = 0;
	int longestVal = 0;
	int longestIndex = -1;
	int i;

	for (i = 0; i < len; i++) {
		if (arr[i] == 1) {
			nowlen++;
		}
		else {
			if (prevlen + nowlen > longestVal) {
				longestVal = prevlen + nowlen;
				longestIndex = i;
			}
			prevlen = nowlen;
			nowlen = 0;
		}
	}

	printf("%d", longestIndex);

}