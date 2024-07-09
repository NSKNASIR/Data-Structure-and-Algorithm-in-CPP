#include <bits/stdc++.h>

using namespace std;

void permutation(string s,int l,int h){
    if(l==h)cout<<s<<endl;
    else{
        for(int i=l;i<h;i++){
            swap(s[i],s[l]);
            permutation(s,l+1,h);
            swap(s[l],s[i]);
        }
    }
}
int main(){
    string s;cin>>s;
    permutation(s,0,s.length());
    return 0;
}