#include<stdio.h>
#include<conio.h>
main()
{
	int n[100],i,avg,v=0,u;
	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&u);

	for(i=0;i<u;i++)
	{
		printf("Enter array elements=");
		scanf("%d",&n[i]);
	}
	for(i=0;i<u;i++)
	{
		v=v+n[i];
	}
	avg=v/u;

	printf("the average is=%d",avg);

	getch();
}
