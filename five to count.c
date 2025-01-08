#include<stdio.h>
int main()
{
int n,ctr,value;
scanf("%d",&n);
if(n>0)
{
value=n%10;
for(ctr=1;ctr<=5;ctr++)
{
printf("%d",ctr*value);
}
}
else
{
value=n%10*(-1);
for(ctr=1;ctr<=10;ctr++)
{
printf("%d",ctr*value);
}
}
