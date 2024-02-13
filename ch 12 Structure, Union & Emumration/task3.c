#include<stdio.h>
struct student
{
	int id,age,std;
	char name[10],course[20],city[20],schl[20];
};
void main()
{
	int i,n,o,v,age;
	int option;
	
	printf("How many employees in your company? :");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter your Id=");
		scanf("%d",&s[i].id);
		printf("Enter your Name=");
		scanf("%s",&s[i].name);
		printf("Enter your age=");
		scanf("%d",&s[i].age);
		printf("Enter your course=");
		scanf("%s",&s[i].course);
		printf("Enter your city=");
		scanf("%s",&s[i].city);
		printf("Enter your standard=");
		scanf("%d",&s[i].std);
		printf("Enter your schl=");
		scanf("%s",&s[i].schl);
		
		printf("\n");
	}
	
	printf("Press 1 for Id login\n");
	printf("Press 2 for Age login\n");
	printf("Press 3 for Standard User login\n");
	
	printf("Enter your option=");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			printf("Your option is Id login\n");
			printf("Enter your Id=");
			scanf("%d",&o);
			
			for(i=0;i<n;i++)
			{
				if(s[i].id==o)
				{
					printf("Id=%d\n",s[i].id);
					printf("Name=%s\n",s[i].name);
					printf("Age=%d\n",s[i].age);
					printf("Course=%s\n",s[i].course);
					printf("City=%s\n",s[i].city);
					printf("Standard=%d\n",s[i].std);
					printf("School=%s\n",s[i].schl);
				}
			}
			break;
			
			
		case 2:
			printf("Your option is Age login\n");
			printf("Press 1 for equal age login\n");
			printf("Press 2 for less than age login\n");
			printf("Press 3 for greater than age login\n");
			
			printf("Enter your option=");
			scanf("%d",&v);
			
				switch(v)
				{
					case 1:
						printf("Press 1 for equal age login\n");
						
						printf("Enter your age :- ");
						scanf("%d",&age);
						
								for(i=0;i<n;i++)
								{
									if(s[i].age==age)
									{
										printf("Id=%d\n",s[i].id);
										printf("Name=%s\n",s[i].name);
										printf("Age=%d\n",s[i].age);
										printf("Course=%s\n",s[i].course);
										printf("City=%s\n",s[i].city);
										printf("Standard=%d\n",s[i].std);
										printf("School=%s\n",s[i].schl);
									}	
								}
								break;		
						
						
					case 2:
						printf("Press 2 for less than age login\n");
						printf("Enter your age :- ");
						scanf("%d",&age);
						
								for(i=0;i<n;i++)
								{
									if(s[i].age<age)
									{
										printf("Id=%d\n",s[i].id);
										printf("Name=%s\n",s[i].name);
										printf("Age=%d\n",s[i].age);
										printf("Course=%s\n",s[i].course);
										printf("City=%s\n",s[i].city);
										printf("Standard=%d\n",s[i].std);
										printf("School=%s\n",s[i].schl);
									}	
								}
								break;		
							
						
					case 3:
						printf("Press 3 for greater than age login\n");
						
						printf("Enter your age :- ");
						scanf("%d",&age);
						
								for(i=0;i<n;i++)
								{
									if(s[i].age>age)
									{
										printf("Id=%d\n",s[i].id);
										printf("Name=%s\n",s[i].name);
										printf("Age=%d\n",s[i].age);
										printf("Course=%s\n",s[i].course);
										printf("City=%s\n",s[i].city);
										printf("Standard=%d\n",s[i].std);
										printf("School=%s\n",s[i].schl);
									}	
								}
								break;		
						
				}
				break;
				
				
		case 3:
			printf("Your option is Standard User login\n");
			printf("Press 1 for equal to standard user login\n");
			printf("Press 2 for less than standard user login\n");
			printf("Press 3 for greater than standard user login\n");
			
			printf("Enter your option=");
			scanf("%d",&v);
			
				switch(v)
				{
					case 1:
						printf("Press 1 for equal standard login\n");
						
								for(i=0;i<n;i++)
								{
									if(s[i].std==9)
									{
										printf("Id=%d\n",s[i].id);
										printf("Name=%s\n",s[i].name);
										printf("Age=%d\n",s[i].age);
										printf("Course=%s\n",s[i].course);
										printf("City=%s\n",s[i].city);
										printf("Standard=%d\n",s[i].std);
										printf("School=%s\n",s[i].schl);
									}	
								}
								break;		
						
						
					case 2:
						printf("Press 2 for less than standard User login\n");
						
								for(i=0;i<n;i++)
								{
									if(s[i].std<9)
									{
										printf("Id=%d\n",s[i].id);
										printf("Name=%s\n",s[i].name);
										printf("Age=%d\n",s[i].age);
										printf("Course=%s\n",s[i].course);
										printf("City=%s\n",s[i].city);
										printf("Standard=%d\n",s[i].std);
										printf("School=%s\n",s[i].schl);
									}	
								}
								break;		
							
						
					case 3:
						printf("Press 3 for greater than standard user login\n");
						
								for(i=0;i<n;i++)
								{
									if(s[i].std>9)
									{
										printf("Id=%d\n",s[i].id);
										printf("Name=%s\n",s[i].name);
										printf("Age=%d\n",s[i].age);
										printf("Course=%s\n",s[i].course);
										printf("City=%s\n",s[i].city);
										printf("Standard=%d\n",s[i].std);
										printf("School=%s\n",s[i].schl);
									}	
								}
								break;		
						
				}
				break;
				
		default:
			printf("Error...\n");						
	}
}

