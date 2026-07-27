#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int pos;
	printf("Enter the position of the element to delete: ");
	scanf("%d", &pos);

	for(int i = pos - 1; i < n; i++) {
		arr[i] = arr[i+1];
	}

	for(int i = 0; i < n-1; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}
