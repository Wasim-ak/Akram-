#include<stdio.h>
int main()
{
int a,b=0,i=0,c,j=0;
printf("Enter the starting number:");
scanf("%d",&a);
printf("Enter the ending number:");
scanf("%d",&c);
for(j=0;j<=c;j++)
{
    a++;
    b=0;
for(i=2;i<=a;i++)
{
    if(a%i==0)
    {
        b++;
    }

}
if(b==1)
{
    if(a<=c)
    printf("%d\t",a);
}
}
return 0;
}

