#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("AVERAGE.INP","r",stdin);
    freopen("AVERAGE.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a,b,n; cin>>a>>b;
    if (a%7!=0){
        a = 1ll*7*(a/7+1);
    }
    b=b-b%7;
    n=b/a;
    long double res = 1.0l*(n*(a+b)/2)/n;
    cout<<fixed<<setprecision(1)<<res;
}
