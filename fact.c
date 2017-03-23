#include<stdio.h>
int main()
{
int a,i,b=1;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
b*=i;
printf("%d",b);
return 0;
}
