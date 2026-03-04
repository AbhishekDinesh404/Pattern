#include<stdio.h>
void main()
{
int i,j,n;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
for(j=1;j<=n-i;j++)
printf("* ");
}
else
{
int num=1;
for(j=1;j<=n-i;j++)
{printf("%d ",num);
num=num+2;
}
}
printf("\n");
}
}
