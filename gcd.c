#include<stdio.h>
int main()
{
int a,b,c,i,d=0;
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
if(a>b)
    c=b;
else
    c=a;
for(i=1;i<=c;i++)
{
if(a%i==0&&b%i==0)
{
    d=i;
}}
printf("%d",d);
return 0;
}
