#include <bits/stdc++.h>
using namespace std;
int so[100003]{}, hoa[100003]{}, thg[100003]{}, res{};
int main(){
    freopen("MK.INP","r",stdin);
    freopen("MK.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,tmp;
    getline(cin, s);
    so[-1]=thg[-1]=hoa[-1]=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0'&&s[i]<='9'){
            so[i]=so[i-1]+1;
        } else so[i]=so[i-1];

        if(s[i]>='a'&&s[i]<='z'){
            thg[i]=thg[i-1]+1;
        } else thg[i]=thg[i-1];

        if(s[i]>='A'&&s[i]<='Z'){
            hoa[i]=hoa[i-1]+1;
        } else hoa[i]=hoa[i-1];
    }
    so[s.size()]=so[s.size()-1];
    thg[s.size()]=thg[s.size()-1];
    hoa[s.size()]=hoa[s.size()-1];
    for(int i=0; i<s.size()-7;i++){
        for(int j=i+7; j<s.size();j++){
            if(so[i+j-1]-so[i-1]>0 && thg[i+j-1]-thg[i-1]>0 && hoa[i+j-1]-hoa[i-1]>0) res++;
        }
    }
    cout<<res;
}
