#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();
	i=1;

	printf("enter the value of n=");
	scanf("%d",&n);

	do
	{
		if(i%2==0)
	{
		printf("%d ",i);
	}
	i++;
	}
	while(i<=n);

	getch();
}