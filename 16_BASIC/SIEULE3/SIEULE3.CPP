#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("SIEULE3.INP","r",stdin);
    freopen("SIEULE3.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    int ans=0;
    for (int i= 0; i<s.size(); i++){
        if (s[i] % 2 != 0){
            ans = ans*10 + (s[i]-'0');
        }
    }
    if (ans % 3 == 0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
