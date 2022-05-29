#include<bits/stdc++.h>
using namespace std;

pair<int,int> minMax(int *arr,int n)
{
    int min = arr[0];
    int max = arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        else
        {
            max=arr[i];
        }
    }

    return {min,max};
}


int main()
{
    int n;
    cin>>n;

    int *arr = new int[5];
    cout<<"Enter Array Eelements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    pair<int,int> p = minMax(arr,n);

    cout<<"First Elements"<<p.first<<" "<<"Second Elements"<<p.second<<endl;
}