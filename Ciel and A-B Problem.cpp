# codechef-solutions
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
ll a,b;
ll p;
cin>>a>>b;
p=abs(a-b);
if(p%10==9)cout<<p-1<<endl;
else cout<<p+1<<endl;
return 0;
}  
