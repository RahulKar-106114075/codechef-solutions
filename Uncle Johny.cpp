#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--)
        {
    int n,k,i;
    cin >> n;
    vector<int> a(n);
        vector<int> b(n);
        //int c[10000];
    for(i = 0;i < n;i++){
       cin >> a[i];
        
        b[i]=a[i];
    }
        cin>>k;
        sort(b.begin(),b.end());
        for(i=0;i<n;i++)
            {
            if(a[k-1]==b[i])
                {cout<<i+1<<endl;break;}
        }
    }
    return 0;
}
 
