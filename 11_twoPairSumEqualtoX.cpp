#include<bits/stdc++.h>
using namespace std;

bool twoSumPresent(int arr[], int n , int x)
{
    int i=0;
    int j = n-1;
    sort(arr,arr+n);
    while(i<j)
    {
        if(arr[i]+arr[j]==x)
            return true;
        
        else if(arr[i]+arr[j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return false;
}

int main()
{
    int arr[] = {1,4,45,6,10,8};
    int n = 6;

    cout<<twoSumPresent(arr,n,16);
}