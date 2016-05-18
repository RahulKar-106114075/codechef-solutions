#include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    using namespace std;
inline void fastRead_int(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
 
inline void fastRead_string(char *str)
{
    register char c=0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();
    while (c > 65)
    {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }
 
    str[i] = '\0';
}
 
    int length(int A[],int n)
        {
        int i,j;
        int lis[n];
        for(i=0;i<n;i++)lis[i]=1;
        for(i=1;i<n;i++)
            {
            for(j=0;j<i;j++)
                {
                if(A[i]<=A[j]&&lis[i]<lis[j]+1)
                    lis[i]=lis[j]+1;
            }
        }
        int max=-1;
        for(i=0;i<n;i++)
            {
            if(max<lis[i])max=lis[i];
        }
        return max;
            
    }
     
    int main(){
        int t;
        cin>>t;
        while(t--)
            {
        int n;
            fastRead_int(&n);
            int i;
int k;fastRead_int(&k);
int min=k;
int s=1;
            int A[n];
            for(i=1;i<n;i++){fastRead_int(&A[i]);if(A[i]<min){min=A[i];s++;}}
            cout<<s<<endl;
            
        }
        return 0;
    }
