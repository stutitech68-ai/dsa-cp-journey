
// Left Rotate Array by One
// Given an integer array nums, rotate the array to the left by one.



// Note: There is no need to return anything, just modify the given array.


// Example 1

// Input: nums = [1, 2, 3, 4, 5]

// Output: [2, 3, 4, 5, 1]

// Explanation:

// Initially, nums = [1, 2, 3, 4, 5]

// Rotating once to left -> nums = [2, 3, 4, 5, 1]

// Example 2

// Input: nums = [-1, 0, 3, 6]

// Output: [0, 3, 6, -1]

// Explanation:

// Initially, nums = [-1, 0, 3, 6]

// Rotating once to left -> nums = [0, 3, 6, -1]

// Now your turn!

// Input: nums = [7, 6, 5, 4]

// Output:


// Validate
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

    int first=arr[0];
    for(int i=0;i<=n-1;i++)
    {
        
        arr[i]=arr[i+1];
        // if(i==n-1)
        // {
        //     arr[i]=first;
        // }
    }
    arr[n-1]=first;
      for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    //tc : O(n)
    // sc: O(1)
    return 0;
}
