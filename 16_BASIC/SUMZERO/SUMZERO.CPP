#include <bits/stdc++.h>
using namespace std;
int t,n=1,a[10005],b[10005];
map<int,int> mp;
int main()
{
    freopen("SUMZERO.INP","r",stdin);
    freopen("SUMZERO.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> t){
        a[n]=t;
        n++;
    }
    n--;
    for (int i=1; i<=n; i++)
    {
        b[i]=b[i-1]+a[i];

        if (mp[b[i]]==0)
          mp[b[i]]=i;
    }
    int res=0,l=0,r=0;
    b[0]=0;
    mp[b[0]]=0;
    for (int i=0;i<=n;i++)
    {
        if (res<i-mp[b[i]]+1){
            l=mp[b[i]]+1;
            r=i;
            res=i-mp[b[i]]+1;
        }
    }
    for (int i=l; i<=r; i++)
        cout << a[i] <<" ";
    cout<<endl;
    for (int i=1; i<=n; i++)
        cout << b[i] <<" ";
    return 0;
}
