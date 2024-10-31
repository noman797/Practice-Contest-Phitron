#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        v.push_back(i);
    }

    vector<int>even;
    vector<int>odd;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }

    if(even.size()>odd.size())
    cout<<1<<endl;
    else if(even.size()==odd.size())
    cout<<0<<endl;
    else
    cout<<-1<<endl;
    }


}