#include<stdio.h>

int sum(int n)
{	
	if (n == 0)
		return 0;
	else 
		return ((n%10) + sum(n/10));	
}

void main()
{
	int num, total=0;
	printf("Enter a number :");
	scanf("%d", &num);
	printf("\nCalculating the sum of digits of the number............. ");
	
	total = sum(num);
	printf("\nTotal = %d",total);
}

