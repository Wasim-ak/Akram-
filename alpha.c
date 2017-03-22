#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\nEnter the Character:");
scanf("%c",&ch);
if(ch>65&&ch<122)
    printf("\nIt is a Alphabet");
else
    printf("It is a not Alphabet");
getch();
}
