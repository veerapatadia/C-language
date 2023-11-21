#include<stdio.h>
#include<conio.h>

main()
{
	float p,r,t,interest;
	clrscr();

	printf("enter the value of p=");
	scanf("%f",&p);
	printf("enter the value of r=");
	scanf("%f",&r);
	printf("enter the value of t=");
	scanf("%f",&t);

	interest=p*r*t/100;

	printf("simple interest is=%.2f",interest);
	getch();
	return 0;
 }