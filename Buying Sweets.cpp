#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    ll t;
    cin>>t;
    while(t--){
    ll n,k,s=0;
    cin>>n>>k;
    ll i,A[n+1];
        for(i=0;i<n;i++){cin>>A[i];s+=A[i];}
        ll y=s/k;
        sort(A,A+n);
        bool flag=true;
        for(i=n-1;i>=0;i--)
            {
            ll temp=s-A[i];
            if((temp/k)==y)
                {
                flag=false;
                break;
            }
        }
        if(flag)cout<<y<<endl;
        else cout<<"-1\n";
        
    }
    return 0;
}
