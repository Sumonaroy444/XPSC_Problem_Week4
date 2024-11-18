
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int win_a =x%3;
        int win_b = y%3;
       int draw = min(win_a,win_b);
         cout<<draw<<endl;
    }
}
