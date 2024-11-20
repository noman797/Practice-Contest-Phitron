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
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            mp[i]=x;
        }
        vector<int>b(m);
        for(int &x:b)
        {
            cin>>x;
        }
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            int k=b[i];
            if(mp[k]>0)
            {
                mp[k]--;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}