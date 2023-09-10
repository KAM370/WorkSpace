#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int i=1,tmp=1,scs=1,d{};
    while (i<=n){
        if (i%10==0 && i/tmp==10){
            scs++;
            tmp=tmp*10;
        }
        int j=i,tcs=0;
        while (j>9){
            tcs = tcs + j % 10;
            j=j/10;
        }
        tcs+=j;
        if(tcs % scs == 0) d++;
        i++;
    }
    cout<<d;

    return 0;
}
