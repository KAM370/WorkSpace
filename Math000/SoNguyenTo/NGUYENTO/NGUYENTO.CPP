#include <bits/stdc++.h>

using namespace std;

bool Prime(long long  n)
{
    if(n<=3){
        return n>1;
    }
    else if (n%2==0||n%3==0)
        return 0;
    for(long long i=5; i*i<=n; i+=6)
        if(n%i==0||n%(i+2)==0)
            return 0;
    return 1;
}

int main(){
    freopen("NGUYENTO.INP","r",stdin);
    freopen("NGUYENTO.OUT","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,m; cin>>n;


    m = trunc(sqrt(n));
    for (long long i=m; i<=n; i++){
        if (Prime(i)){
            cout<<i*i;
            break;
        }
    }

    return 0;
}
