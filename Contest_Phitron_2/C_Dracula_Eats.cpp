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
        int a; cin>>a;
        if(a<2) cout<<0<<endl;
        else if(a>=2)
        {
        int t=a-2;
        int f=t/7;
        cout<<f+1<<endl;
        }
    }

    return 0;
}