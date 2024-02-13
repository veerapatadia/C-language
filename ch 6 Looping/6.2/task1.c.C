#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	i=1;
	clrscr();

	printf("enter the value of n=");
	scanf("%d",&n);

	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=10);

	getch();
}