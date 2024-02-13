#include<stdio.h>
main()
{
	int i,v[10],*ptr[10],n;
	
	printf("Enter the size of array=");
	scanf("%d",&n);
	
	printf("Enter the array's element=\n");
	for(i=0;i<n;i++)
	{
		printf("v[%d]=",i);
		scanf("%d",&v[i]);
		
			ptr[i]=&v[i];
	}
	
	for(i=0;i<n;i++)
	{
		v[i]=(*ptr[i]*(*ptr[i]));
		printf("Squares are=%d\n",v[i]);
	}
}
