#include<stdio.h>
div(int v);
main()
{
	int number;
	
	printf("Enter the number=");
	scanf("%d",&number);
	
	div(number);
}
div( int v)
{
	if(v%3==0 && v%5==0)
	{
		printf("this number is divisible by 3 & 5");
	}
	else
	{
		printf("this number is not divisible by 3 & 5");
	}
}
