#include<stdio.h>
void main()
{
int num=449961,c=0,r;
printf("The count more than 5 is \n");
for( ;num ;num=num/10)
{
r=num%10;
if(r>5)
{
c++;
}
}
printf("%d",c);

}
