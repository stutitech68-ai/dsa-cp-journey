// Input: Arr[] = {1,3,2}
// Output: {2,1,3}
// Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.
// Input : Arr[] = {3,2,1}
// Output: {1,2,3}
// Explanation : As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the lowest permutation.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // print to verify
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    
    for(int j=0;j<n;j++)
    { 
        int first=arr[j];
   for(int i=0;i<n-1;i++)
    {
        
        arr[i]=arr[i+1];
        // if(i==n-1)
        // {
        //     arr[i]=first;
        // }
    }
    arr[n-1]=first;

    }
    
      for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return 0;
}
