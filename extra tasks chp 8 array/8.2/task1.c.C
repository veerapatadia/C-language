#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,a[100],max=0;
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
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("the maximum number in array is=%d\n",max);

	getch();
}