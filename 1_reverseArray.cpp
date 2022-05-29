#include<bits/stdc++.h>
using namespace std;

int  *reverseArray(int *arr,int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    // for(int i =0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    return arr;
}

int main()
{
    int n= 6;

    int *arr = new int[6];
    
    for(int i =0;i<n;i++)
    {
        arr[i]=i+1;
    }

    reverseArray(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}