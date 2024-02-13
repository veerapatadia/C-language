#include<stdio.h>
void main()
{
	char v[100];
	int i,count[256]={0};
	
	printf("Enter a String=");
	gets(v);
	
	for(i=0;v[i];i++)
	{
		count[v[i]]++;
	}
	
	printf("Characters Frequency:\n");
	for(i=0;v[i];i++)
	{
		if(count[v[i]]!=0)
		{
			printf("'%c' --> %d\n",v[i],count[v[i]]);
			count[v[i]]=0;
		}
	}
	
}
