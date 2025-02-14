#include<stdio.h>

int getSum(int sum,int n)
{
    if(n==0) 
        return sum;
        
    return n+getSum(sum,n-1);
}

int main()
{
    int n, sum = 0; 
    scanf("%d",&n);

    printf("%d",getSum(sum, n));
    
    return 0;
}
