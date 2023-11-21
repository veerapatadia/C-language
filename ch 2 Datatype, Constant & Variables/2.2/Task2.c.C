#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
	float height, width, area;
	clrscr();

	p("enter the value of height=");
	s("%f",&height);

	p("enter the value of width=");
	s("%f",&width);

	area=width*height;
	p("area of rectangle is=%.2f\n",area);

	getch();
	return 0;
}