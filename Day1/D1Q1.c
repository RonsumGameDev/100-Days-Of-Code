#include <stdio.h>

int main() {
	
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n+1];

	printf("Enter the elements of the array: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int idx;
	printf("Enter the position for inserting element: ");
	scanf("%d", &idx);

	int val;
	printf("Enter the value: ");
	scanf("%d", &val);

	int f_idx;
	for(f_idx = n; f_idx > idx-1; f_idx--){
		arr[f_idx] = arr[f_idx-1];
	}
	arr[f_idx] = val;

	for(int i = 0; i < n+1; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");


}
