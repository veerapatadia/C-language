#include<stdio.h>
struct employee
{
	int id,age;
	char name[10],role[20],city[20],expe[20],cmpname[20];
};
void main()
{
	int i,n;
	
	printf("How many employees in your company=");
	scanf("%d",&n);
	
	struct employee s[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter your Id=");
		scanf("%d",&s[i].id);
		printf("Enter your name=");
		scanf("%s",&s[i].name);
		printf("Enter your age=");
		scanf("%d",&s[i].age);
		printf("Enter your role=");
		scanf("%s",&s[i].role);
		printf("Enter your city=");
		scanf("%s",&s[i].city);
		printf("Enter your experience=");
		scanf("%s",&s[i].expe);
		printf("Enter your company name=");
		scanf("%s",&s[i].cmpname);
		
		printf("\n");
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("Id=%d\n",s[i].id);
		printf("Name=%s\n",s[i].name);
		printf("Age=%d\n",s[i].age);
		printf("Role=%s\n",s[i].role);
		printf("City=%s\n",s[i].city);
		printf("Experience=%s\n",s[i].expe);
		printf("Company name=%s\n\n",s[i].cmpname);
	}
}
