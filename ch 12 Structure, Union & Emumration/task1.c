#include<stdio.h>
#include<string.h>
struct student
{
	int id,age;
	char name[20],course[10],std[20],city[20],school[20];	
};

void main()
{
	struct student s1,s2,s3;
	
	s1.id=5119;
	strcpy(s1.name,"Veera");
	s1.age=19;
	strcpy(s1.course,"Flutter");
	strcpy(s1.city,"Rajkot");
	strcpy(s1.std,"12th completed");
	strcpy(s1.school,"Red & White");
	
	printf("Id=%d\n",s1.id);
	printf("Name=%s\n",s1.name);
	printf("Age=%d\n",s1.age);
	printf("Course=%s\n",s1.course);
	printf("City=%s\n",s1.city);
	printf("Std=%s\n",s1.std);
	printf("School=%s\n\n",s1.school);
	
	
	s2.id=5121;
	strcpy(s2.name,"Foram");
	s2.age=17;
	strcpy(s2.course,"Flutter");
	strcpy(s2.city,"Rajkot");
	strcpy(s2.std,"12th completed");
	strcpy(s2.school,"Red & White");
	
	printf("Id=%d\n",s2.id);
	printf("Name=%s\n",s2.name);
	printf("Age=%d\n",s2.age);
	printf("Course=%s\n",s2.course);
	printf("City=%s\n",s2.city);
	printf("Std=%s\n",s2.std);
	printf("School=%s\n\n",s2.school);
	
	
	s3.id=6474;
	strcpy(s3.name,"Divyanshi");
	s3.age=18;
	strcpy(s3.course,"Flutter");
	strcpy(s3.city,"Rajkot");
	strcpy(s3.std,"12th completed");
	strcpy(s3.school,"Red & White");
	
	printf("Id=%d\n",s3.id);
	printf("Name=%s\n",s3.name);
	printf("Age=%d\n",s3.age);
	printf("Course=%s\n",s3.course);
	printf("City=%s\n",s3.city);
	printf("Std=%s\n",s3.std);
	printf("School=%s\n\n",s3.school);
	
	
	
	
}
