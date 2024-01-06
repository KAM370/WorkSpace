#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SLXC.INP","r",stdin);
    freopen("SLXC.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s,tmp;
    getline(cin, s);
    set<string> ms;
    for(int i=0;i<s.size();i++){
        tmp="";
        for(int j=i; j<s.size();j++){
            tmp=tmp+s[j];
            ms.insert(tmp);
        }
    }
    cout<<ms.size();
}
