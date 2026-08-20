#include <bits/stdc++.h>
using namespace std;
// Remove Duplicates in-place from Sorted Array

// 29

// Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It doesn't matter what you leave beyond the first k elements.

// Examples
// Input: arr[]=[1,1,2,2,2,3,3]
// Output: [1,2,3,_,_,_,_]
// Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.
// Input: arr[]=[1,1,1,2,2,3,3,3,3,4,4]
// Output: [1,2,3,4,_,_,_,_,_,_,_]
// Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.
int main()
{
    int n;
    cin >> n;
    int num;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // print to verify
    // // for (int i = 0; i < n; i++) {
    // //     cout << arr[i] << " ";
    // // }
    // // cout << '\n';
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (n == 0)
    //     {

    //         break;
    //     }

    //     int j = i + 1;
    //     while (j <= n-1 )
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             arr.erase(arr.begin() + j);
    //                n--;
    //         }
    //          else
    //         {
              
    //             break;
    //         }
              
    //     }
    // }

    // cout << "unique elements present are " << '\n';

    // for (int i = 0; i < n; i++)
    // {
    //     count = count + 1;
    //     cout << arr[i] << " ";
    // }
    // cout << count << '\n';
    // // time cpm= O(n^2);
    
    //brute force approach 
    // set <int> st;
    // int index=0;
    // for (int i = 0; i < n; i++)
    // {
    //     st.insert(arr[i]);
    // }

    // for(auto it : st)
    // {
    //     arr[index]=it;
    //    cout << arr[index]<<'\n';
    //     index++;
    // }
    // cout << index <<'\n';

    //optiMAL appraoch
     for (int i = 0; i < n; i++)
      {
         cout << arr[i] << " ";
     }
int count = 0;

if (n == 0)
{
    return 0;
}

int i = 0;
int j = 1;

while (j < n)
{
    if (arr[i] != arr[j])
    {
        arr[i + 1] = arr[j];
        i++;
    }

    j++;
}

count = i + 1;

// for (int k = 0; k < count; k++)
// {
//     cout << arr[k] << " ";
// }

cout << "\ncount is " << count;

return 0;
            }
