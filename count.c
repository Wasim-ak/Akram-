#include<stdio.h>
int main()
{
long int a;
int b=0;
printf("\nEnter the number");
scanf("%ld",&a);
while(a!=0)
{
a=a/10;
b++;
}
printf("The no of digits is:%d",b);
return 0;
}
