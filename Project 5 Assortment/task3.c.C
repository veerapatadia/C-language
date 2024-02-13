#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a[30][30],v,transpose[30][30];

	clrscr();

	printf("Enter a array's row & columns=");
	scanf("%d",&v);

	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	 }
	 for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	 }
	 for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			transpose[j][i]=a[i][j];
		}
	 }
	 printf("Transpose elements of matrix:\n");
	 for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	getch();
}

