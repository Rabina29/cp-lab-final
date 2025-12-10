#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    int mx = max({g, c, l});
    int mn = min({g, c, l});

    if (mx - mn >= 10) {
        cout << "check again";
    } else {
        int scores[3] = {g, c, l};
        sort(scores, scores + 3);
        cout << "final " << scores[1];
    }

    return 0;
}
