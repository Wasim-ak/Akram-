#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("\nEnter a word:");
    scanf("%s",&a);
    printf("\n%s",strrev(a));
}
