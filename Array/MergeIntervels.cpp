//Program of Merge Intervals
 

#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    
    vector<pair<ll,ll>> v;
    map<ll,ll> mp;
    ll x,y;
    for(ll i=0;i<n;i++){
           cin>>x>>y;
           v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    ll g=v[0].first,h=v[0].second;
    ll a,b;
    for(ll i=1;i<n;i++){
        a=v[i].first;
        b=v[i].second;
        if(a>h || a<g ){
            mp.insert(make_pair(g,h));
            g=a;
            h=b;
        }
        else{
            g=min(g,a);
            h=max(h,b);
        }

    }
    mp.insert(make_pair(g,h));
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}



