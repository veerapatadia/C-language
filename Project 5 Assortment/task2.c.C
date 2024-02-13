#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a[30][30],v,p,largest;

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
	 }
	 for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	 }
	 for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			if(a[i][j]>largest)
			{
				largest=a[i][j];
			}
		}
	}
	printf("the largest number in array is=%d\n",largest);

	 getch();
}

