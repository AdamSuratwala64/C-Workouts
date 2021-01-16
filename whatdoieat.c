#include<stdio.h>

void main()
{
	int choice;
	char p1[] = " Cheese Barbecue Pizza          Rs.120/-";
	char p2[] = " Indian Mexican Pizza           Rs.130/-";
	char p3[] = " Chamalito English Pizza        Rs.140/-";
	char p4[] = " African Delight Pizza          Rs.150/-";
	char p5[] = " Italiano Paneer Pizza          Rs.160/-";
	
	printf("Welcome to Adam's Pizza Joint !");
	printf("\n------------Menu--------------");
	printf("\n1.%s",p1);
	printf("\n2.%s",p2);
	printf("\n3.%s",p3);
	printf("\n4.%s",p4);
	printf("\n5.%s",p5);
	printf("\n\nEnter your choice : ");
	
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\nFood Item & Price:%s", p1);
		break;
		case 2 : printf("\nFood Item & Price:%s", p2);
		break;
		case 3 : printf("\nFood Item & Price:%s", p3);
		break;
		case 4 : printf("\nFood Item & Price:%s", p4);
		break;
		case 5 : printf("\nFood Item & Price:%s", p5);
		break;
		default : printf("\nYou've entered the wrong choice!");
	}
}
