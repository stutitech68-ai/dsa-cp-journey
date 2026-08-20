//     // Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

// // Examples
// // Example 1:
// // Input:
// // arr[] = {1,2,-4,-5}, N = 4
// // Output:
// // 1 -4 2 -5
// // Explanation: 
// // Positive elements = 1,2
// // Negative elements = -4,-5
// // To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5
// // Example 2:
// // Input:
// // arr[] = {1,2,-3,-1,-2,-3}, N = 6
// // Output:
// // 1 -3 2 -1 3 -2
// // Explanation: 
// // Positive elements = 1,2,3
// // Negative elements = -3,-1,-2
// // To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
// // Also, -3 should come before -1, and -1 should come before -2.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) 
//     {
//         cin >> arr[i];
//     }
// int l=0,r=l+1;
// int temp=0;
//     while(l<arr.size())
//     {
//         if(arr[r]<0)
//         {
//             temp=arr[l+1];
//             arr[l+1]=arr[r];
//             arr[r]=temp;
//             l+=2;
//             break;
//         }
 
//         r++;
        
      
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout << arr[i]<<' ';
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int l = 0, r = l + 1;
    int temp = 0;

    while (l < nums.size())
    {
        if (nums[l] < 0)
        {
            if (nums[r] >= 0)
            {
                temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
            }
        }

        temp = 0;

        if (nums[l] > 0 && nums[r] < 0)
        {
            temp = nums[l + 1];
            nums[l + 1] = nums[r];
            nums[r] = temp;

            l += 2;
        }

        r++;
    }

    cout << "Rearranged array: ";

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
