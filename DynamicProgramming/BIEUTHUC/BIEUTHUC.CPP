#include <bits/stdc++.h>

using namespace std;

int a[1001],f[1001],dp[3][1001]{};
int main() {

    freopen("BIEUTHUC.INP","r",stdin);
    freopen("BIEUTHUC.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    f[0] = 0;
    for (int i=1; i<=n; i++){
        f[i] = f[i-1] + a[i];
    }
    int maxx = INT_MIN;
    for (int i=3; i<=n; i++){
        maxx = max(maxx,a[i-2]*a[i-1]*a[i]+f[i-3]+f[n]-f[i]);
    }
    for (int i=1 ; i <=n; i++){
        dp[0][i] = f[i];
    }
    dp[0][0] = dp[1][0] = dp[2][0] = 0;
    dp[0][1] = dp[1][1] = dp[2][1] = a[1];
    for (int cnt = 1; cnt <=2; cnt++){
        for (int i = 1; i<= n; i++){
            dp[cnt][i] = max(dp[cnt][i-1] + a[i], a[i]*a[i-1]+dp[cnt-1][i-2]);
        }
    }
    maxx = max(maxx,dp[2][n]);
    cout<<maxx;

    return 0;
}
