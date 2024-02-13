#include<stdio.h>
main()
{
	int i,n;
	char name[50];
	
	printf("Enter name length=");
	scanf("%d",&n);
	
	printf("Enter any name=");
	scanf("%s",&name);
	
	for(i=0;i<n;i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}
	printf("Lowercase=%s",name);
}
