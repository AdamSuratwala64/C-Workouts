#include <stdio.h>

void main()
{
	int i,j,k,l;
	printf("Enter the number of rows : ");
	scanf("%d",&i);
	for(j=0; j<i;j++)
	{
		for(k=0;k<=j; k++)
		{
			printf("01");
		}
		printf("\n");
	}
}
