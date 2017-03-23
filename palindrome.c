#include<stdio.h>
int main()
{
int a,b=0,c;
printf("\nEnter the number:");
scanf("%d",&a);
c=a;
while(c!=0)
{
    b=b*10;
b=b+(c%10);
c/=10;
}
if(a==b)
printf("It is a palindeome number");
else
printf("It is not a palindrome number");
return 0;
}