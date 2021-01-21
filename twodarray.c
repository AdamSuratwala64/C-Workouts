#include<stdio.h>

void main()
{
	int arr[3][3];
	int i,j;
	int *p=&arr;
	printf("Enter elements of the array : ");
	for(i= 0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\nEnter element for [%d],[%d] : ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nDisplaying the 3x3 array in matrix form.............\n\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",*p);
			*p++;
		}
		printf("\n");
	}
	
	printf("\nDisplaying the sum of diagonal elements............\n\n");
	int dsum=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
				dsum+=arr[i][j];
		}
	}; 
	printf("Sum of elements: \narr[0][0]: %d \narr[1][1]: %d \narr[2][2]: %d \nSum is : %d",arr[0][0], arr[1][1], arr[2][2],dsum);
}


