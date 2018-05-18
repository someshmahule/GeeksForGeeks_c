#include<stdio.h>


void swap(int *a, int *b) {

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
void PrintArray(int arr[],int size) {

	int i;

	for(i=0;i<size;i++) {
		printf("%d\n",arr[i]);
	}
}

void RecBubble(int arr[],int sz) {

	if(sz==1) 
	{
		return;
	}
	int i;

	for(i=0;i<sz-1;i++) {
		if(arr[i]>arr[i+1]) {
			swap(&arr[i],&arr[i+1]);
		}
	}
	RecBubble(arr,sz-1);
}
int main() {
	
	int n;
	int i;

	printf("Enter Size of the Array\n");
	scanf("%d\n",&n);

	if(n==0) {
		printf("Size not acceptable\n");
	}
	else {
	
		int arr[n];

		for(i=0;i<n;i++) {
			
			scanf("%d",&arr[i]);
		}

		RecBubble(arr,n);
		PrintArray(arr,n);
	}
}




