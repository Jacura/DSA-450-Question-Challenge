//Searching in an array where adjacent differ by at most k



#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    int n,x,k;
    cin>>n>>x>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    int j=0,check=0; 
    while(j<n){
        if(ar[j]==x){
            cout<<j+1<<endl;
            check=1;
            break;
        }

        j=j+max( 1 , abs(ar[j]-x) / k );
    }

    if(check==0)
     cout<<"No element is found!!";
    
    return 0;
    
    
}



             





























