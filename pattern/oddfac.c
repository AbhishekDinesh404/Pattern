#include<stdio.h>
void main()
{
int num,i;
printf("Enter the number");
scanf("%d",&num);
for(i=1;i<=num;i=i+2)
if(num%i==0)
printf("%d \n",i);

}
