#include<stdio.h>
#include<conio.h>

main()
{
	int u,v,w,number,i;
	u=0;
	v=1;
	w=0;
	clrscr();

	printf("enter the value of number=");
	scanf("%d",&number);

	for(i=0;i<=number;i++)
	{
		printf("%d ",w);

		u=v;
		v=w;
		w=u+v;
	}
	getch();
}
