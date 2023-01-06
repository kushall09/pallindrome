#include<stdio.h>
int main()
{
    int n,temp,s=0,rem,rev;
    printf("Enter a number:: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        s=s*10+rem;
        n=n/10;
        rev=s;
    }
     printf("The reverse is %d\n",rev);
    if(temp==rev)
    {
        printf("Its a pallindrome buddy!\n");
    }
    else
    {
        printf("Its not a pallindrome hehe!\n");
    }
    return 0;
}
