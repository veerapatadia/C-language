#include<stdio.h>
#include<conio.h>
main()
{
	int i,first,second,n=1;
	i=1;
	clrscr();

	printf("enter the first value=");
	scanf("%d",&first);

	printf("enter the second value=");
	scanf("%d",&second);

	for(i=1;i<=second;i++)
	{
		n=n*first;

		printf("%d ",n);
	}
	getch();
}

