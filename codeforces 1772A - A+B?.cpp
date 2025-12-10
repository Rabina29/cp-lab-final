#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sum(0);
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(isdigit(ch)){
                 sum += ch - '0';
            }
            else continue;
        }
        cout << sum << "\n";
    }
    return 0;
}
