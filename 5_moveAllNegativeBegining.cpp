#include<bits/stdc++.h>
using namespace std;


void moveNegativeEle(int *arr, int n )
{
    int i=0,j=0;

    while(j <n && i<n )
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

   
}

int main()
{
 int arr[]={-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n  = sizeof(arr)/sizeof(arr[0]);
    moveNegativeEle(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}