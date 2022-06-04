#include<bits/stdc++.h>
using namespace std;

int kthSmallest_2(int arr[],int n,int k )
{
    //sort array O(nlog N)

    sort(arr,arr+n);

    return arr[k-1];
}


int kthSmallest_1(int arr[], int l, int r, int k)
{
    // O(n)
    priority_queue<int> s;
        for(int i=0;i<=r;i++)
        {
            s.push(arr[i]);
            // if(s.size() > k)
            //     s.pop();
        }
        while(s.size()!=0)
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        // return s.top();

}

int main()
{
    int n=6;
    int arr[]={7,10,4,3,20,15};
    int k=3;
    cout<<kthSmallest_1(arr,0,n-1,k);  

    cout<<kthSmallest_2(arr,n,k); 
}