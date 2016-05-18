#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int A[n+1];
int i;
for(i=0;i<n;i++)cin>>A[i];
sort(A,A+n);
int min=INT_MAX;
for(i=1;i<n;i++){if(abs(A[i]-A[i-1])<min)min=abs(A[i]-A[i-1]);}
cout<<min<<endl;
}
return 0;
} 
