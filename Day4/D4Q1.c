#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int* start = &arr[0];
	int* end = &arr[n-1];
	int temp; 

	for(int i = 0; i < n / 2; i++) {
		temp = *end;
		*end = *start;
		*start = temp;
		start += 1;
		end -= 1;
	}

	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
