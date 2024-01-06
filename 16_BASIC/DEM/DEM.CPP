#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("DEM.INP","r",stdin);
    freopen("DEM.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    multiset<char> ms;
    for(int i=0;i<s2.size();i++){
        ms.insert(s2[i]);
    }
    for(int i=0;i<s1.size();i++){
        cout<<ms.count(s1[i])<<endl;
    }
}
