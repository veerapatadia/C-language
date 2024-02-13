#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,a[100],min;
	clrscr();

	printf("Enter the size of array=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the array elements a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("the minimum number in array is =%d\n",min);

	getch();
}