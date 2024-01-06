#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("GAPGO.INP","r",stdin);
    freopen("GAPGO.OUT","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long m,n,lcm,gcd; cin>>m>>n;
    lcm = m*n;
    gcd = __gcd(m,n);
    cout<<lcm/gcd;

    return 0;
}
