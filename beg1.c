#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a>0)
printf("\nThe Number is positive");
else if(a<0)
printf("\nThe Number is negative");
else
printf("\nThe Number is Zero");
getch();
}
