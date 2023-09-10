#include <bits/stdc++.h>

using namespace std;
int main(){
    freopen("NJHIKARU.INP","r",stdin);
    freopen("NJHIKARU.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,k; cin>>n>>m>>k;
    vector<vector<int>> a;
    vector<vector<int>> f;
    a.resize(1000001);
    f.resize(1000001);
    for (int i=1; i<= n; i++){
        a[i].resize(1000001);
        for (int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    f[0].resize(1000001);
    for (int i=1; i<= n; i++){
        f[i].resize(1000001);
        for (int j=1; j<=m; j++){
            f[i][j] = f[i][j-1] + f[i-1][j] - f[i-1][j-1] + a[i][j];
        }
    }
    int maxx = INT_MIN;
    for (int i=k; i<= n; i++){
        for (int j=k; j<=m; j++){
            int tmp = f[i][j] - f[i-k][j] - f[i][j-k] + f[i-k][j-k];
            if (maxx< tmp) {
                maxx = tmp;
            }
        }
    }
    cout<<maxx<<endl;
    return 0;
}
