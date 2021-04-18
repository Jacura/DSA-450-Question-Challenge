//DFS ALGORITHM

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll vis[10000]={0};
void printGraph(vector<ll>v[],ll n){
    for(ll i=0;i<n;i++){
        cout<<"vertex "<<i<<" Edges's with: ";
        for(auto j:v[i]){
            cout<<j<<"--";
        }
        cout<<"\n";
    }
}
void bfs(vector<ll> v[],ll n,ll source){
    vis[source]=1;
    queue<ll> q;
    q.push(source);
    cout<<source<<" ";
    while(!q.empty()){
        ll curr = q.front();
        //cout<<curr<<" ";
        q.pop();
        for(auto i:v[curr]){
         if(vis[i]==0){
            vis[i]=1;
            cout<<i<<" ";
            q.push(i);
            
         }
          
        }

    }
    
}

void dfs(vector<ll> v[] , ll n , ll source){
   
        vis[source]=1;
        cout<<source<<" ";
        for(auto i:v[source]){
            if(!vis[i]){
                //vis[i]=1;
                //cout<<i<<" ";
                dfs(v,n,i);
            }
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

    //printGraph(v,n);
     
    dfs(v,n,0);
    return 0;

}
