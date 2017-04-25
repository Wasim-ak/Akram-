#include<stdio.h>
int main()
{
char a;
printf("\nPress Q to exit");
b:
scanf("%c",&a);
switch (a)
{
case 'Q':
    exit(1);
default:
    goto b;
}
return 0;
}
