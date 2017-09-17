#include<stdio.h>
#include<string.h>
int main()
{
    char a1[50];
    int a,b,c,d=0,i;
    printf("\nEnter the String:");
    scanf("%s",&a1);
    a=strlen(a1);
    b=a/2;
    c=b;
    if(a%2==0)
    for(i=0;i<b;i++,c++)
        if(a1[i]==a1[c])
            d++;
    if(d==b)
        printf("\nIt is a Doubly String");
    else
        printf("\nThe given string is not a Double String");
}
