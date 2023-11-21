#include<stdio.h>
#include<conio.h>
main()
{
float f,c;

	clrscr();
	printf("enter the temperature of c=");
	scanf("%f",&c);

	f=(c*9/5)+32;
	printf("the temperature of fahrenheit=%.2f\n",f);

	getch();
	return 0;
}