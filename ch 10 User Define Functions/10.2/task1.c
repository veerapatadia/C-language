#include<stdio.h>
int array(int v[],int n)
 {
 	int i,sum=0;
 
    for(i=0; i<n; i++)
    {
         sum=sum+v[i];
         
    }
 	return sum;
 }
int main()
{
    int v[30],i,n,sum;
   
    printf("Enter size of the array = ");
    scanf("%d", &n);
 
    printf("Enter elements in array = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&v[i]);
    }
 
    sum=array(v,n);
    printf("sum of array is =%d",sum);
 
    
}
