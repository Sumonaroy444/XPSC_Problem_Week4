
#include <bits/stdc++.h>
#define ll long long int  
using namespace std; 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        ll c; 
        cin>>n>>c;

        vector<ll> v(n); 
        for (int i = 0; i < n; ++i) {
            ll a;
            cin >> a;
            v[i] = a + (i + 1); 
        }
        sort(v.begin(), v.end()); 

        int mx_teleporters = 0;
        for (auto cost : v) {
            if (c >= cost) {
                c -= cost;
                mx_teleporters++;
            } 
            else {
                break; 
            }
        }
        cout << mx_teleporters << "\n";
    }
}


