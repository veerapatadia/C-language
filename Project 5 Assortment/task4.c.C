#include<stdio.h>
#include<conio.h>
main()
{

	int a[50][50],i,j,r,c,row,column,rowsum=0,colsum=0;
	clrscr();

	printf("Enter the array's row size=");
	scanf("%d",&r);
	printf("Enter the array's column size=");
	scanf("%d",&c);

	printf("Enter array's elements=\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter row number=");
	scanf("%d",&row);

	printf("Elements of row [%d]=",row);

	for(j=0;j<c;j++)
	{
		printf("%d",a[row][j]);
		rowsum=rowsum+a[row][j];
	}
	printf("\nSum of row [%d]=%d\n",row,rowsum);

	printf("Enter column number=");
	scanf("%d",&column);

	printf("Elements of column [%d]=",column);

	for(i=0;i<r;i++)
	{
		printf("%d",a[i][column]);
		colsum=colsum+a[i][column];
	}
	printf("\nSum of column [%d]=%d\n",column,colsum);

	getch();
}


