//This Program uses insertion sort to sort the provided array

#include<stdio.h>
#include"Print.h"
#include"swap.h"

void InsertSort(int arr[],int size) {

	int i,j;
	int key;

	for(i=1;i<size;i++) {
		key = arr[i];
		j = i-1;
		while (j>=0 && arr[j]>key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}

}
int main() {
	
	int n;
	scanf("%d\n",&n);

	int arr[n];
	int i;

	for(i=0;i<n;i++) {
		
		scanf("%d",&arr[i]);
	}

	InsertSort(arr,n);
	PrintArray(arr,n);
}
