#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios :: sync_with_stdio(false);
  //  cin.tie(0);
    string pi = "314159265358979323846264338327950288419716939937510582097494";

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int num = s.size();
        for(int i=0; i<s.size(); i++){
            if(s[i] != pi[i]){
                num = i;
                break;
            }
            else continue;
        }
        cout << num << endl;
    }
    return 0;

}
