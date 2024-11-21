#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        if(k>sum){
            cout<<-1<<endl;
        }
        else{
            int ans =0,l=0,r=0;
            sum = 0;
             while(sum<k){
                sum+=ar[l];
                l+=1;
             }
             while(l<n && ar[l]==0){
                l += 1;
             }
             ans = l;
             while(l<n){
                if(ar[l]==0){
                    ans = max(ans,l-r+1);
                    l+=1;
                }
                else{
                    while(ar[r] != 1){
                        r+=1;
                    }
                    r+=1;
                    ans = max(ans,l-r+1);
                    l+=1;
                }
             }
             cout<<n-ans<<endl;
        }
    }
    return 0;
}


