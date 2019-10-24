#include<stdio.h>
int main()
{
    int n,i,len;
    long long int mod=1000000007;
    long long int ans;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    ans=arr[0];
    i=arr[0];
    len=arr[n-1];
    for(;i<=len;i++)
    {

        printf("%d",i);
        ans=(ans*i)%mod;
    }
    printf("%lld",ans);
    return 0;

}
