#include<stdio.h>

int checkprime(int num, int i)
{
		if(i == 1)
			return 1;
		else
		{
			if(num % i == 0)
				return 0;
			else
				checkprime(num, i-1);
		}
}

void main()
{
	int number, half, cp;
	printf("Enter a number to check prime or not : ");
	scanf("%d",&number);
	half = number/2;
	cp = checkprime(number, half);
	if(cp==1)
		printf("\n%d is a prime number.", number);
	else
		printf("\n%d is not a prime number.", number);
}
