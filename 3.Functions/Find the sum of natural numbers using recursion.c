#include<stdio.h>

int addNum(int n);
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("Sum of %d = %d",num,addNum(num));
    return 0;
}

int addNum(int n)
{
    if(n!=0)
        return n+addNum(n-1);
    else
        return n;
}
