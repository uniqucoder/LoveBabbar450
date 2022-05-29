#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int n)
{
    int c0=0,c1=0,c2=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        else if(arr[i]== 1)
        {
            c1++;
        }
        else if(arr[i]== 2)
        {
            c2++;
        }
    }

    int j=0;

    while(c0--)
    {
        arr[j]=0;
        j++;

    }
    while(c1--)
    {
        arr[j]=1;
        j++;
        
    }
    while(c2--)
    {
        arr[j]=2;
        j++;
        
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int n = 5;

    int arr[]={1,1,0,2,2};

    sort012(arr,n);
}