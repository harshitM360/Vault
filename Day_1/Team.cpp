#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n--){
        int t,v,p;
        cin>>t>>v>>p;
        int x = t+v+p;
        if(x>=2){
            count += 1;
        }
    }
    cout<<count<<endl;
    return 0;
}
