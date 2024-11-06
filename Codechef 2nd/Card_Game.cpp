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
        int n,x; cin>>n>>x;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(i!=x and (i+x)%2==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}