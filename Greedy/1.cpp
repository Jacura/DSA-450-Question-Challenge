//N meetings in one room

#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main() {
     int n;
     cin>>n;
     vector<pair<ll,ll>> vi;
     while(n--){
         ll x,y;
         cin>>x>>y;
         vi.push_back(make_pair(x,y));
     }
    sort(vi.begin(), vi.end(), sortbysec);
    ll sec=vi[0].second,count=1;
    for(int i=1;i<vi.size();i++){
        if(vi[i].first>=sec){
            count++;
            sec=vi[i].second;

        }
    }
    cout<<count<<endl;
}
