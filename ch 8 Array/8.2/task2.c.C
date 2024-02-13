#include<stdio.h>
#include<conio.h>
main()
{
	int first,second,n,even[100],i;
	clrscr();

	printf("enter the first year=");
	scanf("%d",&first);
	printf("enter the second year=");
	scanf("%d",&second);

	if(first%2!=0)
	first++;

	n=(second-first)/2+1;
	even[n];

	for(i=0;i<n;i++)
	even[i]=first+2*i;

	printf("even years %d and %d are\n",first,second);

	for(i=0;i<n;i++)
	{
		printf("%d ",even[i]);
	}
	getch();
}
