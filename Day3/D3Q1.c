#include <stdio.h> 

int main() {
	
	int n; 
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the numbers in the array: ");

	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int ns;
	int c = 0;
	int found = 0;
	printf("Enter the number to search: ");
	scanf("%d", &ns);
	for(int i = 0; i < n; i++) {
		c++;
		if(arr[i] == ns) {
			printf("Found at index: %d\n", i);
			printf("Number of comparisions made: %d\n", c);
			found = 1;
		}
	} 

	if(!found) {
		printf("Number is not in the array");
	}

}
