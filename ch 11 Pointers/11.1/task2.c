#include<stdio.h>
main()
{
	int v,p,a,*b,*c;
	
	printf("Enter the value of x=");
	scanf("%d",&v);
	printf("Enter the value of y=");
	scanf("%d",&p);
	
	printf("Before Swapping x=%d\n",v);
	printf("Before Swapping y=%d\n",p);
	
	b=&v;
	c=&p;
	
	a=*b;
	*b=*c;
	*c=a;
	
	printf("After Swapping x=%d\n",v);
	printf("After Swapping y=%d\n",p);
	
	
}
