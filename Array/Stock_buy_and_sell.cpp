// Stock Buy And Sell


// 15

// Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Examples
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note: That buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
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
     int l=0,r=n-1;
     int mean=arr[0];
     int minval=0;
     while(l<r )
     {
         if(l==n-1)
         {
             break;
         }
         if(mean>arr[l])
         {
             mean=arr[l];
             pos=l;
         }
         minval=min(minval,mean);
         l++
     }
     int mex=arr[l];
     int mexl=0;
     while(l<r)
     {
            if(l==n-1)
         {
             break;
         }
         if(mex<arr[l])
         {
             mex=arr[l];
             pos=l;
         }
         mexl=max(mexl,mex);
         l++;
     }
     cout << mexl-minval;
    return 0;
}
