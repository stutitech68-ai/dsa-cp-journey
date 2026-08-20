// Left Rotate Array by K Places

// Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.


// Example 1

// Input: nums = [1, 2, 3, 4, 5, 6], k = 2

// Output: nums = [3, 4, 5, 6, 1, 2]

// Explanation:

// rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

// Example 2

// Input: nums = [3, 4, 1, 5, 3, -5], k = 8

// Output: nums = [1, 5, 3, -5, 3, 4]

// Explanation:

// rotate 1 step to the left: [4, 1, 5, 3, -5, 3]

// rotate 2 steps to the left: [1, 5, 3, -5, 3, 4]

// rotate 3 steps to the left: [5, 3, -5, 3, 4, 1]

// rotate 4 steps to the left: [3, -5, 3, 4, 1, 5]

// rotate 5 steps to the left: [-5, 3, 4, 1, 5, 3]

// rotate 6 steps to the left: [3, 4, 1, 5, 3, -5]

// rotate 7 steps to the left: [4, 1, 5, 3, -5, 3]

// rotate 8 steps to the left: [1, 5, 3, -5, 3, 4]

// Now your turn!

// Input: nums = [1, 2, 3, 4, 5], k = 4
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
    int k ;
    cout << "enter k "<<'\n';
    cin >> k;
    // print to verify
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    
    for(int j=0;j<k;j++)
    {
        int first=arr[0];
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
