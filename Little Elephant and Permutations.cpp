#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
int local(int A[],int n)
    {
    int i,c=0;
    for(i=1;i<n;i++)
        {
        if(A[i]<A[i-1])c++;
    }
    return c;
}
 int global(int A[],int n)
     {
     int i,j;
     int c=0;
     for(i=0;i<n-1;i++)
         {
         for(j=i+1;j<n;j++)
             {
             if(A[i]>A[j])c++;
         }
     }
     return c;
 }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        int A[n];
        int i;
        for(i=0;i<n;i++)cin>>A[i];
        if(n==1)cout<<"YES\n";
        else
            {
            if(local(A,n)==global(A,n))cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }
    
    
    return 0;
}
  
