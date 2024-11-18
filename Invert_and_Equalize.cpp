#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int one=0,zero =0;
        if(n==1)
         cout<<0<<endl;
         else{
            for(int i=0;i<n-1;i++){
                if(s[i] == '1' && s[i+1] == '0')
                   zero++;
            }
             for(int i=0;i<n-1;i++){
                if(s[i] == '0' && s[i+1] == '1')
                   one++;
            }
            int mx = max(zero,one);
            cout<<mx<<endl;
         }
    }
}
