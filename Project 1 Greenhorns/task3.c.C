#include<stdio.h>
#include<conio.h>
main()
{
int first,second,third;

	clrscr();
	printf("enter the value of first angle=");
	scanf("%d",&first);
	printf("enter the value of second  angle=");
	scanf("%d",&second);

	third=180-(first+second);

	printf("third angle is=%d\n",third);
	getch();
	return 0;
}
