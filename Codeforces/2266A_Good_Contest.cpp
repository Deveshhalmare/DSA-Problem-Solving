#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=0;
        for(int i=0;i<3;i++){
            int a;
            cin>>a;
            int weak=n-a;
            maxi=max(maxi,weak);
        }
        cout<<maxi<<endl;
    }
    return 0;
}