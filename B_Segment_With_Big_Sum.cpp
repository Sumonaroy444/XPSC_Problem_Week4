#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll l = 0, r = 0, ans = n + 1; 
    ll sum = 0;

    while (r < n) {
        sum += a[r];
        while (sum >= k) {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    if (ans == n + 1) {
        cout << -1 << endl;
    } 
    else {
        cout << ans << endl;
    }
}


