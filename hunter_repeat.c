#include<stdio.h>
int main()
{
int a[50],n,i,j=0,b=0;
printf("Enter the no of numbers to be entered:");
scanf("%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++,j++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j]&&i!=j&&a[i]!='\0'){
    a[j]='\0';
    b=1;
}
}if(b==1)
printf("\n%d",a[i]);
b=0;
}
return 0;
}
