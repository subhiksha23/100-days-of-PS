#include<stdio.h>
#include<stdlib.h>
int main()
{
int len,index;
char str[1001];
scanf("%s",&str);
len=strlen(str);
for(index=len-1;index>=0;index--)
{
printf("%c",str[index]);
}
}
