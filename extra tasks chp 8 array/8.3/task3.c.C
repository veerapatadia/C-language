#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a[30][30],v,p,sum=0;

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
	       //	printf("\n");
	 }
	 for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	 }
	 for(i=1;i<v-1;i++)
	{
		for(j=1;j<p-1;j++)
		{
			sum=sum+a[i][j];
		}
		printf("\n");
	 }
	 printf("sum of inner elements of an array=%d",sum);
	 getch();
}

