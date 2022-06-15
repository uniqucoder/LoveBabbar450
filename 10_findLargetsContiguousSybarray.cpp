#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n){

    int sum=0;
    int ans = INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum += arr[i];

        ans = max(sum,ans);
        if(sum < 0)
        {
            sum=0;
        }
    }

    return ans;

}
int main()
{
    int arr[]= {1,2,3,-2,5};

    int n =sizeof(arr)/sizeof(arr[0]);


    cout<<maxSubarraySum(arr,n);

    return 0;
}