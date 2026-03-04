/* WAP to write the pattern 
        E
      1 2
    C D E
  1 2 3 4
A B C D E
*/

#include<stdio.h>
void main()
{
int n,i,j,s;
printf("Enter the number");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
for(s=1;s<=n-i;s++)
printf("  ");
for(j=1;j<=i;j++)
{
if(i%2==0)
printf("%d ",j);
else
printf("%c ",'E'-i+j);
}
printf("\n");
}
}
