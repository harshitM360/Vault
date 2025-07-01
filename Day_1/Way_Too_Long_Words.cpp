#include<bits/stdc++.h>
using namespace std;

string too(string s){
    string ans;
    ans.push_back(s[0]);
    int r = s.size()-2;
    string t = to_string(r);
    for(auto ch:t){
        ans.push_back(ch);
    }
    ans.push_back(s[s.size()-1]);
    return ans;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.size()>10){
            cout<<too(s)<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
