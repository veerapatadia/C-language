#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,a[50][50],sum=0,j,r,c;
	clrscr();

	printf("enter the size of rows=");
	scanf("%d",&r);
	printf("enter the size of columns=");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		sum=sum+a[i][i];
		sum=sum+a[i][r-1-i];
	}
	if(r%2==1)
	{
		sum=sum-a[r/2][r/2];
	}
	printf("sum of cross-diagonal elements=%d\n",sum);

	getch();
}

