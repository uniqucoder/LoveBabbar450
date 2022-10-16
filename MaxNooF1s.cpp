#include<bits/stdc++.h>
using namespace std;




int maxNo1s( vector<vector<int>> mat, int n, int m)
{
    int posibleAns = -1;
    int j = m-1;
    while(j >=0 && mat[0][j] == 1)
    {
        j--;
    }

    posibleAns = (j != m-1) ? 0 : -1;
    for(int row = 1; row < n; row++)
    {
        if(mat[row][j] == 1 && j>=0)
        {
            while(j>=0 && mat[row][j])
            {
                j--;
            }
            posibleAns= row;
        }
    }

    return posibleAns;
}


int main()
{
    int n = 4,m=4;
    vector<vector<int>>arr(n,vector<int>(m,0));
    arr[0][3] = 1;
    arr[1][3] = 1;
    arr[1][2] = 1;

    arr[2][3] = 1;
    arr[2][2] = 1;
    arr[2][1] = 1;
    arr[2][0] = 1;

    arr[3][3] = 1;
    arr[3][2] = 1;
    cout<<maxNo1s(arr,n,m)<<endl;
    cout<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}