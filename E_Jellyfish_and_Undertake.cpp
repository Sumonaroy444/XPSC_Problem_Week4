#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
     cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        long long int ans=0;
        for(int i=0; i<n; i++){
            int x; 
            cin>>x;
            if((b+x)<=a){
                ans+=x;
            }
            else{
                ans+=a;

            }
            int k= min((b+x),a);
            //ans+=k;
            // ans+=b;

        }
        ans+=(b-1);
        cout<<ans<<endl;
    }

}



