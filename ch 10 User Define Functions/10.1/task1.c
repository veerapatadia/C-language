#include<stdio.h>
cube();
main()
{
	cube();	
}
cube()
{
	int number,cube;
	
	printf("Enter the number=");
	scanf("%d",&number);
	
	cube=number*number*number;
	
	printf("cube =%d",cube);
}
