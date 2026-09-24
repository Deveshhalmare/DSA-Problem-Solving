#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
 
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        if(!is_sorted(v.begin(),v.end())) cout<<0<<endl;
        else{
            int mini=INT_MAX;
            for(int i=1;i<n;i++){
                mini=min(mini,v[i]-v[i-1]);
            }
            cout<<mini/2+1<<endl;
        }
    }
    return 0;
}