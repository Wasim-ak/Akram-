#include<stdio.h>
int main()
{
int a,b,c;
printf("\nEnter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("\n%d is greater",a);
else if(b>c)
printf("\n%d is greater",b);
else
printf("\n%d is greater",c);
return 0;
}
