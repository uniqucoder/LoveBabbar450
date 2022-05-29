#include<bits/stdc++.h>
using namespace std;

int intersectionArray(int *a,int *b,int n,int m)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    int count=0;
    for(int i=0;i<m;i++)
    {   
        int key = b[i];
        if(s.find(key) !=s.end() )
        {
            cout<<key<<" ";
            count++;
        }
    }
    cout<<endl;

    return count;
}
int main()
{
    int a[]={1,2,3,4};
    int b[]={1,2}; 
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(a[0]);

    cout<<intersectionArray(a,b,n,m);

}