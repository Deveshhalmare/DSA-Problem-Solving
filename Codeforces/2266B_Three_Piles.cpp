#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<max(abs(a+c-b),abs(a-b))<<endl;
    }
    return 0;
}