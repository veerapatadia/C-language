#include<stdio.h>
struct student
{
	int roll,chem_marks,maths_marks,phy_marks;
	char name[20];
};
void main()
{
	int i;
	float per,total;
		
	struct student s[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter details of student %d:\n",i);
		printf("Roll no.=");
		scanf("%d",&s[i].roll);
		printf("Name=");
		scanf("%s",&s[i].name);
		printf("Chemistry=");
		scanf("%d",&s[i].chem_marks);
		printf("Mathematics=");
		scanf("%d",&s[i].maths_marks);
		printf("Physics=");
		scanf("%d",&s[i].phy_marks);
		
		printf("\n");
	}
	
	for(i=0;i<5;i++)
	{
		
		printf("%s",s[i].name);
		printf("(%d)\n",s[i].roll);
		printf("Chemistry=%d\n",s[i].chem_marks);
		printf("Mathematics=%d\n",s[i].maths_marks);
		printf("Physics=%d\n",s[i].phy_marks);
		
		total=s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
		printf("Total=%.2f/300\n",total);
		per=(total)/3;
		printf("Percent=%.2f%%\n\n",per);
		
	}
	
}
	

				
