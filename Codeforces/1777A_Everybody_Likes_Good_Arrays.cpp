#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int prev;
        cin>>prev;
        int ans=0;
        for(int i=1;i<n;i++){
            int a;
            cin>>a;
            if(a%2==prev%2) ans++;
            prev=a;
        }
        cout<<ans<<endl;
    }
    return 0;
}