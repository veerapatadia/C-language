#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],b[10],c[10],n,m,i;
	clrscr();

	printf("Enter the A's array element=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the B's array element=");
	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		printf("enter array element b[%d]=",i);
		scanf("%d",&b[i]);
	}

	printf("Array c is= ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
	getch();
}