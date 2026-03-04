#include<stdio.h>
void main()
{
int num=100;
printf("The factors of the %d are",num);
for(int i=1;i<=num;i++)
{
if(num%i==0 && i%2==0)
 printf("even numbers %d \n",i);
else if(num%i==0 && i%2!=0)
 printf("odd numbers %d \n",i);
}

}
