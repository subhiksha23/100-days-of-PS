#include<stdio.h>
#include<math.h>
int main(){
int rem,orgnum,num,result=0;,n=0;
orgnum=num;
printf("\n Enter a number");
scanf("%d",&num);
int temp=num
while(temp!=0)
{
temp/=10;
n++;
}
temp=num;
while(temp!=0)
{
rem=temp%10;
result+=pow(rem,n);
temp/=10;
}
if(result==orgnum)
{
printf("Armstrong");
}
else
{
printf("Not an Armstrong);
}
}
