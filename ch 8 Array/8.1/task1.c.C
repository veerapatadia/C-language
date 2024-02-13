#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,a=0,v[100];
	clrscr();

	printf("Enter the array=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter array elements v[%d]=",i);
		scanf("%d",&v[i]);
	}
	for(i=1;i<=n;i++)
	{
		a++;
	}
	printf("the length of an array is=%d\n",a);

	getch();
}
