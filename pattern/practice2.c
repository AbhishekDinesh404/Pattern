#include<stdio.h>
void main()
{
int i,j,n;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
char ch='A';
for(j=1;j<=i+1;j++)
{if(j%2==0)
printf("* ");
else
{
printf("%c ",ch);
ch=ch+2;
}
}
printf("\n");
}

}
