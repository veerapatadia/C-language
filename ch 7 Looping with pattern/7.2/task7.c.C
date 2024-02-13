#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(s=1;s<=i;s++)
		{
			printf("%d",s);
		}
		for(j=i;j<=4;j++)
		{
			printf("  ",j);
		}
		for(s=i;s>=1;s--)
		{
			printf("%d",s);
		}
		printf("\n");
	}

		getch();
}