#include<stdio.h>
int main()
{
int a,b;
printf("Enter a starting number:");
scanf("%d",&a);
printf("Enter the ending number:");
scanf("%d",&b);
for(a;a<b;a++)
{
if(a%2!=0)
printf("%d\t",a);
}
return 0;
}
