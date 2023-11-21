#include<stdio.h>
#include<conio.h>
main()
{
int a,b;

	clrscr();
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);

	if(a<b)
	{
		printf("a has minimum value=%d\n",a);
	}
	else
	{
		printf("b has minimum value=%d\n",b);
	}

	getch();
	return 0;
}