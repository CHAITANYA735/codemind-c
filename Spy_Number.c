                                                              #include<stdio.h>
int main()
{
    int n,sum=0,pro=1,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        pro=pro*rem;
        sum=sum+rem;
        
        
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    
    return 0;
}