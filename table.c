#include<stdio.h>
int main()
{
int a,i,b,n;
printf("Enter the number:");
scanf("%d",&a);
printf("Enter the number of multiples");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
b=i*a;
printf("\n%d*%d=%d",a,i,b);
}
return 0;
}
