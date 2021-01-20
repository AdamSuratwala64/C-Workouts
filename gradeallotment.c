#include<stdio.h>

void main()
{
	int marks;
	
	printf("Enter marks to check grade : ");
	scanf("%d", &marks);
	
	if( marks >= 85)
		{ printf("\nYour grade is : Grade A");
		}
	else if( marks>=70 && marks < 85)
		
		{ printf("\nYour grade is : Grade B");
		}
	else if( marks>=55 && marks < 70)
		{ printf("\nYour grade is : Grade C");
		}
	else if( marks>=40 && marks < 55)
		{ printf("\nYour grade is : Grade D");
		}
	else
		{ printf("\nYour grade is : Grade F");
			printf("\nSorry You have failed.");	
		}
}
