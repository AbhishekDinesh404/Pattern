/*

A 1 B 2 C
A 1 B 2
A 1 B
A 1
A


*/

#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
char chara='A';
int num=1;
for(j=0;j<n-i;j++)
if(j%2==0)
{
printf("%c ",chara);
chara++;
}
else
{
printf("%d ",num);
num++;
}
printf("\n");

}


}
