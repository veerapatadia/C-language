#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a[5][5],sum=0;

	clrscr();

	printf("Enter array's elements=\n");

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	 }
	 for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0 || j==0 || j==4 || i==4)
			{
				printf("%d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	 }
	 for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0 || i==5-1 ||j==0 || j==5-1)
			{
				sum=sum+a[i][j];
			}
		}
		printf("\n");
	 }

	 printf("sum of boundary elements of an array=%d",sum);
	 getch();
}

