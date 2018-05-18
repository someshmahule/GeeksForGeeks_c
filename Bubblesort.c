#include<stdio.h>



void printArr(int arr[],int n) {

	int j;

	for(j=0;j<n;j++) {
		printf("%d\n",arr[j]);
	}
}

void swap(int *a,int *b) {

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
void BubbleSort(int arr[],int no) {

	int i,j;
	
	for(i=0;i<no-1;i++) {
		for(j=0;j<no-i-1;j++) {
			if(arr[j]>arr[j+1]) {
				swap(&arr[j],&arr[j+1]);
			}
		}
	}


}

int main() {
	
	printf("Enter Number of elements\n");
	int n;
	scanf("%d\n",&n);
	int arr[n];
	int j;
	for(j=0;j<n;j++) {
		
		scanf("%d",&arr[j]);
	}
	BubbleSort(arr,n);
	printArr(arr,n);
}
