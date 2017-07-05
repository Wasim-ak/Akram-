#include<stdio.h>
int main()
{
int x1,x2,x3,x4,y1,y2,y3,y4;
printf("Enter the 1st co-ordinates:");
scanf("%d%d",&x1,&y1);
printf("Enter the 2nd co-ordinates:");
scanf("%d%d",&x2,&y2);
printf("Enter the 3rd co-ordinates:");
scanf("%d%d",&x3,&y3);
printf("Enter the 4th co-ordinates:");
scanf("%d%d",&x4,&y4);
if(x1==x2&&y1==y4&&y2==y3&&x3==x4)
    printf("\nIt's a Square");
else
    printf("\nIt's not a square");
}
