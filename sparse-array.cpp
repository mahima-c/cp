#include<bits/stdc++.h>
using namespace std;




int main(){
    int n,q;
    cin>>n;
    string strings[n];

    for(int i=0;i<n;i++){
        cin>>strings[i];
    }
    cin>>q;
    string queries[q];

    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
    map<string, int>mp;
    for(int i=0;i<q;i++){
        string key =queries[i];
        if(mp.count(key)==0){
            mp[key]=1;
        }
    }
    for(int i=0;i<n;i++){
        string key =strings[i];
        if(mp.count(key)!=0){
            mp[key]++;
        }
    } 
    for(int i=0;i<q;i++){
        string key =queries[i];
        if(mp.count(key)!=0){
            cout<<(mp[key]-1)<<"\n";
        }
    }

    return 0;

}
