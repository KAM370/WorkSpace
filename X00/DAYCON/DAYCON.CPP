#include <bits/stdc++.h>

using namespace std;

int a[1000001]{};

int main(){
    freopen("DAYCON.INP","r",stdin);
    freopen("DAYCON.OUT","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,len{}; cin>>n>>m;
    long long tong{},res{};
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    for (int i=1; i<=n; i++){
        tong = tong + a[i];
        if (tong <= m){
            len++;
        }
        else{
            tong = a[i];
        res= res + (len*(1+len)/2);
            len=1;
        }
    }
    cout<<res;

    return 0;
}
