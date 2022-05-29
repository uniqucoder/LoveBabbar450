#include<bits/stdc++.h>
using namespace std;

//Union of two Arrays

void UnionArray(int *a,int *b,int n,int m)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }

    for(auto &x : s)
    {
        cout<<x<<" ";
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int b[]={3,6};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    UnionArray(a,b,n,m);

    

}