#include<stdio.h>
#include<conio.h>
main()
{
int number;
	clrscr();

	printf("enter the number=");
	scanf("%d",&number);

	if(number==0)
	{
		printf("this number is neutral");
	}
	else if(number>0)
	{
		printf("this number is positive");
	}
	else
	{
		printf("this number is negative");
	}
	getch();
	return 0;
 }