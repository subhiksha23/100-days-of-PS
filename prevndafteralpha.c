#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch=='a')
{
printf("z%c",ch+1);
}
else if(ch=='z')
{
printf("%ca",ch-1);
}
else
{
printf("%c%c",ch+1,ch-1);
}
}
