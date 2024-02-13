#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a[30][30],b[30][30],c[30][30],v,p;

	clrscr();

	printf("Enter a array's row=");
	scanf("%d",&v);
	printf("Enter a array's column=");
	scanf("%d",&p);

	for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	 }
	for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	 }

	for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	 }
	 printf("Array C is:\n");
	 for(i=0;i<v;i++)
	 {
		for(j=0;j<p;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	 }
	 getch();
}

