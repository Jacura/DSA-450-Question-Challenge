//Program to find comman elements in 3 arrays:


#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    ll n1,n2,n3;
    cin>>n1>>n2>>n3;
    set<ll> s1,s2,s3;
    ll x;
    for(ll i=0;i<n1;i++)
    {
        cin>>x;
        s1.insert(x);
    }
    for(ll i=0;i<n2;i++)
    {
        cin>>x;
        s2.insert(x);
    }
    for(ll i=0;i<n3;i++)
    {
        cin>>x;
        s3.insert(x);
    }
    
    for(auto i:s1){
        if(s2.count(i) && s3.count(i))
         cout<<i<<" ";
    }

}







///Another Method space complexity O(1)
// #include <bits/stdc++.h>
// #define ll long long 
// using namespace std;
// int main() {
//     ll n1,n2,n3;
//     cin>>n1>>n2>>n3;
     
//     ll ar1[n1],ar2[n2],ar3[n3];
//     for(ll i=0;i<n1;i++)
//      cin>>ar1[i];
//     for(ll i=0;i<n2;i++)
//      cin>>ar2[i];
//     for(ll i=0;i<n3;i++)
//      cin>>ar3[i];
//     ll j=0,k=0,i=0;
     
//       while( j<n2 && k<n3 && i<n1){
//           if(ar2[j]==ar3[k] && ar2[j]==ar1[i]){
//               cout<<ar1[i]<<" ";
//               i++;
//               j++;
//               k++;
//           }
//            else if(ar1[i]<ar2[j])
//             i++;
//            else if(ar2[j]<ar3[k])
//             j++;
//            else
//             i++;
           
//       }


    
//     return 0;

// }
