#include<stdio.h>
#include"Print.h"
#include"swap.h"

void InsertSort(int arr[],int size) {

	int i,j;

	for(i=0;i<size;i++) {
		
		for(j=0;j<
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
