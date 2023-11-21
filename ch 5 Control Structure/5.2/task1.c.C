#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
	clrscr();
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter the value of c=");
	scanf("%d",&c);

	if(a==b && a==c)
	{
		printf("all value are same=%d",c);
	}
	else if(a==b)
	{
		printf("a and b are same=%d",b);
	}
	else if(b==c)
	{
		printf("b and c are same=%d",c);
	}
	else if(a==c)
	{
		printf("a and c are same=%d",c);
	}
	else if(a<b)
	{
		if(a<c)
		{
			printf("a is minimum=%d",a);
		}
		else
		{
			printf("c is minimum=%d",c);
		}
	}
	else if(b<c)
	{
		printf("b is minimum=%d",b);
	}
	else
	{
		printf("c is minimum=%d",c);
	}
	getch();
	return 0;
}
