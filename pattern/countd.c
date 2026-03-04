#include<stdio.h>
void main()
{
int num,c=0;
printf("Enter the number");
scanf("%d",&num);
for( ;num;num=num/10)
{
int temp=num%10;
if(temp>5)
c++;
}
printf("%d",c);
}
