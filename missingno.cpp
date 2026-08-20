// Find missing number
// Subscribe to TUF+

// Hints
// Company
// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.


// Example 1

// Input: nums = [0, 2, 3, 1, 4]

// Output: 5

// Explanation:

// nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]

// Example 2

// Input: nums = [0, 1, 2, 4, 5, 6]

// Output: 3

// Explanation:

// nums contains 0, 1, 2, 4, 5, 6 thus leaving 3 as the only missing number in the range [0, 6]

// Now your turn!

// Input: nums = [1, 3, 6, 4, 2, 5]

// Output:

// Pick your answer
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long int n;
    int pos;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int first= arr[0];
    // print to verify
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << '\n';
//     int sum =0;
//    for (int i = 0; i < n; i++)
//     {
//         sum=sum+arr[i];
//     }
//     // cout << sum<<'\n';
//       long long expSum = (n *(n + 1)) / 2;      
//     // cout << sum1<<'\n';     
//     cout << "missing number is" << expSum-sum<<'\n';   
    int xor1  =0;
    int xor2 = 0;
    for(int i=0;i<n-1;i++)
    {
        xor1=xor1 ^arr[i];
    }
    for(int i=0;i<=n;i++)
    {
        xor2=xor2 ^i;
    }
    int return1 =xor1 ^ xor2;
    cout << "missing number is" << return1 <<'\n';

    return 0;
}
