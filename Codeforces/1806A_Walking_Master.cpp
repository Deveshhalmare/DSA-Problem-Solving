#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long count=0;
        
        if(d<b){
            cout<<-1<<endl;
            continue;
        }
        while(b<d){
            a=a+1;
            b=b+1;
            count++;
        }
        while(a>c){
            a=a-1;
            count++;
        }
        if(a==c && b==d) cout<<count<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}