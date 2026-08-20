// Longest Subarray with given Sum K(Positives)


// 41

// Problem Statement: Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

// Examples
// Example 1:
// Input:
//  nums = [10, 5, 2, 7, 1, 9], k = 15  
// Output:
//  4  
// Explanation:
//  The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.

// Example 2:
// Input:
//  nums = [-3, 2, 1], k = 6  
// Output:
//  0  
// Explanation:
//  There is no sub-array in the array that sums to 6. Therefore, the output is 0.

#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
cin >> n;
vector<int> arr(n);
int num;

int max_len=0;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 int k ;
 cin >> k;
 int length=0;
 int l=0;
 int r=l+1;
 int sum=arr[0];
while(r<n)
{
    while(l<r && sum>k)
    {
        sum+=sum-arr[l];
        l++;
    }
 
//   if(sum<k)
//   {
//    r++;
//   }
//   else if(sum==k)
//   {
//   length=r-l+1;
    if(sum==k)
    {
        max_len=max(max_len,l-r+1);
    }
      r++;
  }

if(r<n )
{
    sum+=arr[r];
}
 cout << length;



    // for(int i=0;i<n;i++)
    // {

    //     for(int j=i;j<n;j++)
    //     {
    //         sum=0;
    //         for(int k=i;k<=j;k++)
    //         {
                
    //                 sum = sum +arr[k];
    //         }
    //                 if(sum==k)
    //                 {
    //                     length=j-i+1;
    //                     max_len=max(max_len,length);
    //                 }
    //         }
    // }
  
    
      cout  << max_len;
}


