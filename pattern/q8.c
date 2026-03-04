#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
int num=n;
for(j=0;j<i+1;j++)
if(i%2==0)
{
printf("%d ",num);
num--;
}
else
printf("* ");
printf("\n");
}


}
