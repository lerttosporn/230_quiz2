#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=0;n!=1;i++)
{
n=n/10;
}
printf("%d",i);
return 0;
}
