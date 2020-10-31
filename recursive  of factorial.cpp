#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if (n==1)
        return 1;

    else
    return(n*fact(n-1));
}

    int main()
{
int n;
printf("Enter the value of n ");
scanf("%d",&n);
fact(n);
printf(" The factorial of %d is %d",n,fact(n));
}
