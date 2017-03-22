#include<stdio.h>
int main()
{
    int a,b,i,n;
    printf("\nEnter the no of terms to be calculated:");
    scanf("%d",&n);
    printf("\n");
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        scanf("%d",&b);
        a=a+b;
        b=0;
    }
    printf("\nThe sum of is:%d",a);
return 0;
}
