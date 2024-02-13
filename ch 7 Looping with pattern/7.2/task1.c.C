#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
			printf(" ",s);
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}