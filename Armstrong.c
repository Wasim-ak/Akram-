#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c=0,d=0,e=0;
printf("\nEnter the number:");
scanf("%d",&a);
b=a;
while(b!=0)
{
    b/=10;
    ++e;
}
b=a;
while(b!=0)
{
c=b%10;
d+=pow(c,e);
b/=10;
}
if(d==a)
printf("\n%d is a Armstrong number",a);
else
printf("\n%d is not a Armstrong number",a);
return 0;
}
