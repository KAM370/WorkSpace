#include <bits/stdc++.h>
using namespace std;
int t[1000002]{}, a[1000002]{};
int main(){
    freopen("PHANTHUONG.INP","r",stdin);
    freopen("PHANTHUONG.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k,maximum{INT_MIN},vt; cin>>n>>k;
    t[0]=0;
    for (int i=1; i<=n; i++){
        cin>>a[i];
        t[i]=t[i-1]+a[i];
    }
    for (int i=1; i<=n-k+1; i++){
        if(maximum<t[i+k-1]-t[i-1]){
            maximum = t[i+k-1]-t[i-1];
            vt=i;
        }
    }
    cout<<maximum<<endl;
    cout<<vt;
}
