#include <bits/stdc++.h>

using namespace std;

string s{};
int a[10] = {0,1,2,3,5,6,7,8,9};

void tryy(long long n){
    if (n/9 != 0) {
            char ch = (a[n%9] + 48);
            s = s + ch;
            tryy(n/9);
    } else {
        char ch = (a[n%9] + 48);
        s = s + ch;
    }
}

int main(){
    freopen("CHUOISO.INP","r",stdin);
    freopen("CHUOISO.OUT","w",stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    long long n;
    while (t--){
        cin>>n;
        tryy(n);
        cout<<s<<endl;
        s="";
    }
}
