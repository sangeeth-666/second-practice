#include<stdio.h>
int main()
{
        int r,sum=0,temp,n;
        printf("enter the number:");
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
                r=n%10;
                sum=(sum*10)+r;
                n=n/10;
        }
        if(temp==sum)
                printf("palindrome\n");
                else
                        printf("not a palindrome\n");
        return 0;
}

