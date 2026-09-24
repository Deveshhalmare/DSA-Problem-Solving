#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                count+=2;
            }
            else{
                break;
            }
        }
        cout<<n-count<<endl;
    }
    return 0;
}