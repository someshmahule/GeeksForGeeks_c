#include<stdio.h>


void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectSort(int arr[],int n) {
	
	int i = 0;
	int j = 0;
	int min = 0;
	for(i=0 ; i<n ;i++) {
		min = arr[i];
		for (j=i;j<n ; j++) {
			if(arr[j]<min) {
				swap(&arr[i],&arr[j]);
			}
		}
	}
}
void print(int arr[],int n){
	
	int i;
	i=0;
	for(i=0;i<n;i++) {
		printf("%d\n",arr[i]);
	}
}
int main() {


	int arr[] = {64,83,62,61,94,6};
	int n;
	n = 6;
	selectSort(arr,n);
	print(arr,n);
}
