#include <bits/stdc++.h>

using namespace std;

int d[1000]{},dd[1000]{};

int main(){
    freopen("PHATQUA.INP","r",stdin);
    freopen("PHATQUA.OUT","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,res{1},dem{}; cin>>a>>b;

    int i=2,n = __gcd(a,b),m=n;
    while (n != 1) {
        while (n%i==0){
            if (d[i] == 0) {
                d[i]++;
                dem++;
                dd[dem] = i;
            }
            else {
                d[i]++;
            }
            n/=i;
        }
        i++;
    }
    for (int i=1; i<=dem; i++){

        if(m!=0) res = res * (d[dd[i]]+1);
    }
    cout<<res;

    return 0;
}
