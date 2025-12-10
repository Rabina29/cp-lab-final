include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
   int n; cin >> n;
   vector<int> a(n);
   for(int i=0; i<n; i++){
    cin >> a[i];
   }
   int x; cin >> x;

   int mn = *min_element(a.begin(), a.end());
   int mx = *max_element(a.begin(), a.end());

   if(x >= mn && x <= mx){
    cout << "YES\n";
   } else cout << "NO\n";
   
}
     
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
