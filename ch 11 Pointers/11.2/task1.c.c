#include<stdio.h>
main()
{
	int n,i,v[50],*ptr;
	
	ptr=&v[i];
	
	printf("Enter array's size=");
	scanf("%d",&n);
	
	printf("Enter array's element:\n");
	for(i=0;i<n;i++)
	{
		printf("v[%d]=",i);
		scanf("%d",&v[i]);
	}
	ptr=&v[i-1];
	
	printf("Reverse elements of array:\n");
	for(i=n;i>0;i--)
	{
		printf("%d ",*ptr);
		ptr--;
	}
	
}
