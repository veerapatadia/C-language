#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,v=11;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",v);
			v++;
		}
		printf("\n");
	}
	getch();
}