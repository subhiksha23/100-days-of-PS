#include<stdio.h>
void rev(char* str)
{
int l=0;
int r=strlen(str)-1;
while(l<r)
{
char temp=l;
l=r;
r=temp;
l++;
e--;
}
}
int main()
{
char str[1001];
scanf("%s",&str);
rev(str);
printf("%s",str);
}
