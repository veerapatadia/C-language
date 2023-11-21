#include<stdio.h>
#include<conio.h>
main()
{
int x,y,z,square;

	clrscr();
	printf("enter the value of x=");
	scanf("%d",&x);
	printf("enter the value of y=");
	scanf("%d",&y);
	printf("enter the value of z=");
	scanf("%d",&z);

	square=(x+y+z)*(x+y+z);

	printf("the square is=%d",square);
	getch();
	return 0;
  }

