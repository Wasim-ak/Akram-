#include<stdio.h>
int main()
{
    int a,b,i,n;
    printf("\nEnter the no of numbers to be calculated:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        scanf("%d",&b);
        a=a+b;
        b=0;
    }
    printf("\nThe sum of numbers is:%d",a);
return 0;
}
