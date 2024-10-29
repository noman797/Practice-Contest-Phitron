#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    int t; cin>>t;
    while(t--)
    {
    int n,x;
    cin>>n>>x;
    int ans=0;
    for(int i=0;i<x;i++)
    {
        ans+=pow(2,n-i);
    }
    int l=n-x;
    for(int i=1;i<=l;i++)
    {
        ans=ans-pow(2,i);
    }

    cout<<ans<<endl;
    }

    return 0;
}