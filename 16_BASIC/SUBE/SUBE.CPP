#include <bits/stdc++.h>
using namespace std;

int t[10000000]{};
int main(){
    freopen("SUBE.INP","r",stdin);
    freopen("SUBE.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    int maximum{INT_MIN}, vt{};
    s=' '+s+' ';
    t[0] = 0;
    for (int i=1; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            t[i] = t[i-1] + 1;
            if (maximum < t[i]) {
                vt = i-t[i]+1;
                maximum = t[i];
            }
        } else t[i] = 0;
    }
    for(int i=vt; i<vt+maximum; i++) cout<<s[i];
}
