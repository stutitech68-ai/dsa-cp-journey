
// Example 1:
// Input:
//  nums = [2, 3, 5, -2, 7, -4]  
// Output:
//  15  
// Explanation:
//  The subarray from index 0 to index 4 has the largest sum = 15, which is the maximum sum of any contiguous subarray.

// Example 2:
// Input:
//  nums = [-2, -3, -7, -2, -10, -4]  
// Output:
//  -2

// Input:
// nums = [-2, 3, -1, 5, -6, 4]
// Output:
// 7
// Explanation:
//  The largest sum is -2, which comes from taking the element at index 0 or index 3 as the subarray. Since all numbers are negative, the subarray with the least negative number gives the largest sum.
 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
   
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 int max_val=INT_MIN;
     // print to verify
     // for (int i = 0; i < n; i++)
     // {
     //     cout << arr[i] << " ";
     // }
     // cout << '\n';
      
    for(int i=0;i<n-1;i++)
    {
     sum=0;
     for(int j=i;j<n;j++)
     {
         sum=sum+arr[j];
          max_val=max(max_val,sum);
     }    
    }
  if(n==1)
 {
         cout <<arr[n-1]<<'\n';
         exit(0);

 }
 cout << max_val ;
// tl:O(N^2)

}
