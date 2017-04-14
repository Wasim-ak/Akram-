#include<stdio.h>
int main()
{
int a,i=0,b=0,c=1,d;
printf("\nEnter the number:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
if(i<=1)
{
d=i;
}
else
{
d=b+c;
b=c;
c=d;
}
printf("\t%d",d);
}
}
