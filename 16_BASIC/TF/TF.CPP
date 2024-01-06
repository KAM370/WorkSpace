#include <bits/stdc++.h>
using namespace std;
int vt[10005]{};
map<int,int> dp;
int main(){
    freopen("TF.INP","r",stdin);
    freopen("TF.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,tmp;
    getline(cin, s);
    int maximum{INT_MIN},cnt{};
    s=' '+s;
    dp[0]=1;
    vt[0]=0;
    for (int i=1; i<s.size(); i++)
    {
        if(s[i] == 'T') cnt++;
        else cnt--;
        if (dp[cnt] > 0){
            maximum = max(maximum,i-vt[cnt]);
        }
        else vt[cnt]=i;
        dp[cnt]++;
    }
    cout<<maximum<<endl;
    cnt=0;
    for (int i=1; i<s.size(); i++)
    {
        if(s[i] == 'T') cnt++;
        else cnt--;
        if(i-vt[cnt] == maximum) cout<<vt[cnt]+1<<' ';
    }
}
