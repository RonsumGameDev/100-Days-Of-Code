#include <stdio.h>

int main() {
	
	int n, m;
	printf("Enter the size of Array 1: ");
	scanf("%d", &n);

	int arr1[n];
	printf("Enter the elements of Array 1: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	printf("Enter the size of Array 2: ");
	scanf("%d", &m);

	int arr2[m];
	printf("Enter the elements of Array 2: ");
	for(int i = 0; i<m; i++) {
		scanf("%d", &arr2[i]);
	}

	int i = 0;
	int j = 0;

	while(i < n && j < m) {
		if(arr1[i] < arr2[j]) {
			printf("%d ", arr1[i]);
			i++;
		} else {
			printf("%d ", arr2[j]);
			j++;
		}
	}

	while(i < n) {
		printf("%d ", arr1[i]);
		i++;
	}

	while(j < m) {
		printf("%d", arr2[j]);
		j++;
	}

	printf("\n");
}