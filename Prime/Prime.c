#include<stdio.h>
#include<conio.h>
int main()
{
    int n , i , flag=0;
    printf("enter a number");
    scanf("%d", &n );
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        else
        i=i+1;
    }
    if(flag==1)
    {
        printf("%d is not a prime number.\n",n);
    }
    else
    {
        printf("%d is a prime number.\n",n);
    }
return 0;
}