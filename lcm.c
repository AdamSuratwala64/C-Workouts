#include<stdio.h>

int findlcm(int n, int m)
{
	static int multiple  = 0;
	
	multiple += m;
	if((multiple%n==0)&&(multiple%m==0))
		{ return multiple;
		}
	else
		{ return findlcm(n , m); 
		}
}

void main()
{
	int num1, num2, lcm, count = 1;
	printf("Enter number 1 : ");
	scanf("%d", &num1);
	printf("Enter number 2 : ");
	scanf("%d", &num2);
	
	if(num1 > num2)
		lcm = findlcm(num2, num1);
	else
		lcm = findlcm(num1, num2);
		
	printf("The least common multiple of %d and %d is : %d", num1, num2, lcm);
}
