#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    ll n,s;
    cin>>n>>s;
    vector<ll>a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll l=0,r= 0,sum=0,count=0;
   while(r<n) {
        sum += a[r]; 
        while (sum >= s) {
            count += (n-r); // right er man gula good segment hobe
            sum -= a[l]; 
            l++; 
        }
        r++;
    }
    cout << count << endl; 
}



