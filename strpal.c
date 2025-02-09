#include<stdio.h>
int main()
{
char str[];
printf("enter str");
scanf("%s",&str);
int i,isPalindrome,len=1;
len = strlen(str[]);
for(i=0;i<len/2;i++)
if(str[]!=str[len-i-1])
{
isPalindrome=0;
break;
}
if(isPalindrome)
{
printf("true");
}
else
{
printf("false");
}
}
