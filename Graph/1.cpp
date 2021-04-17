//Create a Graph and Print it

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printGraph(vector<ll>v[],ll n){
    for(ll i=0;i<n;i++){
        cout<<"Adjacency List of Vertex "<<i<<" : ";
        for(auto j:v[i]){
            cout<<j<<"--";
        }
        cout<<"\n";
    }
}
int main() {
    ll n;
    cin>>n;
    //total no of vertices are 'n' eg 0,1,2,n-1.
    vector<ll> v[n];

    //Adding Edges
    ll edges;
    cin>>edges;
    while(edges--){
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    printGraph(v,n);
    return 0;

}
