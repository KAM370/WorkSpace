#include <bits/stdc++.h>
using namespace std;
int a[1000005]{},d[1000005]{},t[1000005]{},vt{},sum{INT_MIN},maximum{INT_MIN};
int main(){
    freopen("UNDEC.INP","r",stdin);
    freopen("UNDEC.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    d[1]=1;
    t[1]=a[1];
    t[0]=0;
    for (int i=2; i<=n; i++){
        t[i]=t[i-1]+a[i];
        if(a[i-1] <= a[i]){
            d[i]=d[i-1]+1;
            if (maximum<d[i]) maximum = d[i];
        } else d[i]=1;
    }
    for(int i=maximum; i<=n; i++){
        if (d[i]==maximum){
            if(sum<t[i]-t[i-maximum]){
                sum=t[i]-t[i-maximum];
                vt=i-maximum+1;
            }
        }
    }
    cout<<maximum<<' '<<vt;

}
