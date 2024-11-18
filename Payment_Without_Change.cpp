#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
    ll r =s%n;
     if(r<=b && (a*n+b) >= s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}

