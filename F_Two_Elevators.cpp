
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
� � ios::sync_with_stdio(false);
� � cin.tie(NULL);
� � int t;
� � cin >> t;
� � while (t--) {
� � � � ll a, b, c;
� � � � cin >> a >> b >> c;
� � � � ll t1 = abs(a - 1);
� � � � ll t2 = abs(b - c) + abs(c - 1);

� � � � if (t1 < t2) {
� � � � � � cout << 1 <<endl; 
� � � � } 
� � � � else if (t1 > t2) {
� � � � � � cout << 2 <<endl; 
� � � � } 
� � � � else {
� � � � � � cout << 3 << endl; 
� � � � }
� � }
}

