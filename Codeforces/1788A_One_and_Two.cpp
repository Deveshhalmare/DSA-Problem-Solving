#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==2) v.push_back(i);
        }
        int s=v.size();
        if(s==0){
            cout<<1<<endl;
        }
        else if(s%2==0){
            cout<<v[(s/2)-1]+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}