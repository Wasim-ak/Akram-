#include<stdio.h>
int main()
{
    int a[1000],b=1,i,j,k=0,l,m,n,o;
    printf("Enter a Number:");
    scanf("%d",&m);
    n=m/2;
    for(i=1;i<n;i++)
    {
       b=1,k=0;
       j=i;
       while(j>0)
       {
           a[k]=j%10;
           j=j/10;
           k++;
       }
       for(l=0;l<k;l++)
       {
           b=b*a[l];
       }
       b=b*i;
       if(b==m)
       {
           printf("\nThe Seed of Number %d is:%d",m,i);
           o=1;
           break;
       }
    }
    if(o!=1)
    printf("\nNo Seed Found");
}