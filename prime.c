#include<stdio.h>
int main()
{
int a,b=0,i;
printf("Enter the number:");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
{
b++;
}
}
if(b==1)
{
printf("\n%d is a prime number",a);
}
else
printf("\n%d is not a prime number",a);
return 0;
}
