#include<stdio.h>

void main()
{
	int a,b,swap;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("\n");
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("\n");
	printf("A = %d \n", a);
	printf("B = %d \n", b);
	
	printf("Swapping in progress ...........................\n\n");
	
	swap = a;
	a = b;
	b = swap;
	
	printf("The swapped values are : \n");
	printf("A = %d \n", a);
	printf("B = %d \n", b);
}
