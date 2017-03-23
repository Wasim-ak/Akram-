#include<stdio.h>
int main()
{
long int a,b,c=1,i;
printf("Enter the number:");
scanf("%ld",&a);
printf("Enter the power of a number:");
scanf("%ld",&b);
for(i=0;i<b;i++)
{
c=c*a;
}
printf("The power of the number is:%ld",c);
return 0;
}
