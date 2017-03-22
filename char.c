#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("\nEnter the character:");
scanf("%c",&a);
if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
{
printf("\nIt is a Vowel");
}
else
printf("It is a Consonant");
getch();
}
