#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c; cin>>a>>b>>c;
    int t=a*b;
    int min=c*24*60;
    if(t<=min) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

    return 0;
}