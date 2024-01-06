#include <bits/stdc++.h>
using namespace std;

int kitu[100]{};

int main(){
    freopen("COUNTCH.INP","r",stdin);
    freopen("COUNTCH.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    long long res{},maximum{LONG_MIN};
    for (int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i]<='Z'){
            kitu[s[i]]++;
            if (maximum < kitu[s[i]]) maximum = kitu[s[i]];
        }
    }
    for (char i='A'; i<='Z'; i++){
        if(kitu[i]>0) res++;
    }
    cout<<res<<endl;
    for (char i='A'; i<='Z'; i++){
        if(kitu[i] == maximum) cout<<i;
    }

    return 0;
}

