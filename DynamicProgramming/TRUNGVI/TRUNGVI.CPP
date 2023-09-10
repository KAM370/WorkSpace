#include<bits/stdc++.h>

using namespace std;

int f[100001], a[100001], mp[100001] , vt[100001];

int main(){
    freopen("TRUNGVI.INP","r",stdin);
    freopen("TRUNGVI.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie();

    int n,m,res{},vtm; cin>>n>>m;
    for (int i=1; i<=n; i++){
        int x; cin>>x;
        if (x>m) {
            a[i] = 1;
        }
        else if (x==m) {
            a[i]=0;
            vtm=i;
        } else a[i]=-1;
    }
    vector<int> vtor[1001];
    f[0]=0;rf
    mp[0]++;
    vtor[0].push_back(0);
    for (int i=1; i<=n; i++){
        f[i] = f[i-1]+a[i];
        mp[f[i]]++;
        if (mp[f[i]] > 1){
            for (int x:vtor[f[i]]){
                if ( (i-x) % 2==0 || vtm > i || vtm < x ){
                    mp[f[i]]--;
                }
                else {
                    res = res + mp[f[i]]-1;
                }
            }
        }
        vtor[f[i]].push_back(i);
    }
    cout<<res;
}
