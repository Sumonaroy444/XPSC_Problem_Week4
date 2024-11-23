#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        vector<int> b(m);
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());

        vector<int> a;
        for (int i = 0; i < n - 1; i++) {
            a.push_back(b[i]);
        }
        a.push_back(a.back() + 1); 

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}



