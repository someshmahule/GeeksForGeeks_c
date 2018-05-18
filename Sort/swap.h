#include<stdio.h>

//Function Prototype Declaration
void swap(int *a, int *b);


//Function Defination
void swap(int *a, int *b) {

	int temp;

	temp = *a;
	*a  = *b;
	*b = temp;
}
