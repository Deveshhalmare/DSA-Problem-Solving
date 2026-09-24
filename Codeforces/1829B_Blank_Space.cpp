#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int count =0;
        int maxi=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==0) count++;
            else count=0;
            maxi=max(maxi,count);
        }
        cout<<maxi<<endl;
    }
    return 0;
}