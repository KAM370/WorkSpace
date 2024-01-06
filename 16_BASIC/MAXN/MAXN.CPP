#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if(a.size()>b.size()) return false;
    else if(a.size()<b.size()) return true;
    else return a>b;
}
int main(){
    freopen("MAXN.INP","r",stdin);
    freopen("MAXN.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    string maximum="",tmp="";
    for (int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            if (tmp.size()==0 && s[i] >= '1')
                tmp+=s[i];
            else
                if(tmp.size()>0) tmp+=s[i];
            maximum=max(maximum,tmp,cmp);
        } else tmp="";
    }
    cout<<maximum;
}
