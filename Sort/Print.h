#include<stdio.h>

void PrintArray(int arr[],int size);

void PrintArray(int arr[],int size) {
	
	int i;
	printf("\nPrinting Array\n");
	for(i=0;i<size;i++) {
		
		printf("%d\n",arr[i]);
	}
}
