#include<stdio.h>
#include<conio.h>
main()
{
	float i,j,a[30][30],v,p,sum=0,f=0,avg;

	clrscr();

	printf("Enter the array's row size=");
	scanf("%f",&v);
	printf("Enter the array's columns size=");
	scanf("%f",&p);

	for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("a[%.0f][%.0f] :- ",i,j);
			scanf("%f",&a[i][j]);
		}
	}


	for(i=0;i<v;i++)
	{
		for(j=0;j<p;j++)
		{
			sum=sum+a[i][j];
			f++;
		}
		printf("\n");
	}


	avg=sum/f;

	printf("the average is=%.2f\n",avg);

	getch();
}
