#include<bits/stdc++.h>
using namespace std;

bool TriplateFound(int A[],int n ,int x)
{
    // step 
    sort(A,A+n);
    // vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int c = A[i];
        int sum = x - c;

        int start = i+1;
        int end = n-1;

        while (start<end)
        {
            if(A[start]+ A[end] == sum)
            {
                cout<<c<<" "<<A[start]<<" "<<A[end]<<endl;
                return true;
            }
                
            else if(A[start] + A[end] > sum)
                end--;
            else
                start++;    
        }

        return false;
        
    }
}

int main()
{
    int A[] = {1,4,45,6,10,8};
    int n =6;
    int X = 13;

    cout<<TriplateFound(A,n,X);
}