#include<stdio.h>
#include<math.h>
int main()
{
long int a,b,c=0,d=0,e=0,g;
printf("\nEnter the number:");
scanf("%ld",&a);
printf("\nEnter the ending number:");
scanf("%ld",&g);
b=a;
for(a;a<=g;a++)
{
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
printf("\n%ld",a);
b=a;
c=0;
d=0;
e=0;
}
return 0;
}
