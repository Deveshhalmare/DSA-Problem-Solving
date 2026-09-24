#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int neg=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==-1) neg++;
        }
        int ans=0;
        if(neg%2!=0){
            neg--;
            ans++;
        }
        int pos=n-neg;
        while(neg>pos){
            neg-=2;
            pos+=2;
            ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}