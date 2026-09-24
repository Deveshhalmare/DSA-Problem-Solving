#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b){
            int diff=b-a;
            cout<<diff<<endl;
        }
        else if(a>b){
            if(a%b==0) cout<<0<<endl;
            else{
                int q=a/b;
                q++;
                cout<<(q*b)-a<<endl;
            }
        }
        else cout<<0<<endl;
    }
    return 0;
}