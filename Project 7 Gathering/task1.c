#include<stdio.h>
void main()
{
	int v,p,choice,i;
	
	for(i=choice;i<=0;choice++)
	{	
		
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for the exit\n");
	
		printf("enter your choice=");
		scanf("%d",&choice);
	
		if(choice==0)
		{
			break;
		}
		else if(choice>6)
		{
			printf("Enter valid Number....");
		}
		
		printf("Enter the First number= ");
		scanf("%d",&v);
		printf("Enter the Second number= "); 
		scanf("%d",&p);
	
		switch(choice)
		{
			case 1 :
				printf("Addition Of %d and %d is = %d\n\n",v,p,sum(v,p));
				break;
			
			case 2 :
				printf("Substriction Of %d and %d is = %d\n\n",v,p,sub(v,p));
				break;
			
			case 3 :
				printf("Multiplication Of %d and %d is = %d\n\n",v,p,multi(v,p));
				break;
			
			case 4 :
				printf("Division Of %d and %d is = %d\n\n",v,p,div(v,p));
				break;
			
			case 5 :
				printf("Module Of %d and %d is = %d\n\n",v,p,module(v,p));
				break;
			
			default :
				printf("Invalid number...");
		}
		
	}
		
}
int sum(int c,int d)
{
	return c + d ;
}

int sub(int c,int d)
{
	return c - d ;
}

int multi(int c,int d)
{
	return c * d ;
}

int div(int c,int d)
{
	return c / d ;
}

int module(int c ,int d)
{
	return c % d ;
}
