#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("DIEUKHIEN.INP","r",stdin);
    freopen("DIEUKHIEN.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int m,n,s,res{}; cin>>m>>n>>s;

    vector<vector<int>> a;
    a.resize(50002);

    int h[50002]{},c[50002]{};

    for (int i=1; i<= m; i++){
        a[i].resize(50002);
        for (int j=1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    for (int i=1; i<=s; i++) {
        int x; cin>>x;
        if ( x <= m ){
            h[x]++;
        }
        else {
            c[x-m]++;
        }
    }
    for (int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            int tmp = (h[i] + c[j]) % 3;
            if (tmp == 1){
                if (a[i][j] == 2){
                    a[i][j] = 0;
                } else a[i][j]++;
            }
            else if (tmp == 2){
                if (a[i][j] == 2){
                    a[i][j] = 1;
                } else if (a[i][j] == 1){
                    a[i][j] = 0;
                } else if (a[i][j] == 0){
                    a[i][j] = 2;
                }
            }
        }
    }
    for (int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if (a[i][j] == 0){
                res++;
            }
        }
    }
    cout<<res<<endl;

    return 0;
}
