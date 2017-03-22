#include<stdio.h>
int main()
{
int a;
printf("Enter any year");
scanf("%d",&a);
if(a%4==0)
printf("\nThe entered year is a leap year");
else
printf("\nThe entered year is a not leap year");
return 0;
}

