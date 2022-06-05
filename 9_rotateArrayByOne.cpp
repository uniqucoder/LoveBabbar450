#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n-1];

    for(int i=n;i>0;i--)
    {
        
        swap(arr[i],arr[i-1]);
        
    }
    
    arr[0]=temp;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    rotate(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}