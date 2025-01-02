#include<stdio.h>
#include<bool.h>
bool checkyear(int n)
scanf("%d",&n);
if(n%400==0)
{
return true;
}
else if(n%100==0)
{
return false;
}
else  if(n%400==0)
{
return true;
return false;
}
int main()
{
scanf("%d",&n);
if(checkyear(year)){
printf("leap year");
}
else
{
printf("not a leap year");
}
