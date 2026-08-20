#include <bits/stdc++.h>
using namespace std;

// Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
// Output: {1,2,3,4,5}
// Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
// Distnict Elements in arr1 are : 1
// Distnict Elemennts in arr2 are : No distinct elements.
// Union of arr1 and arr2 is {1,2,3,4,5}

// Input:n = 10,m = 7,arr1[] = {1,2,3,4,5,6,7,8,9,10}arr2[] = {2,3,4,4,5,11,12}
// Output: {1,2,3,4,5,6,7,8,9,10,11,12}
// Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
// Distnict Elements in arr1 are : 1,6,7,8,9,10
// Distnict Elemennts in arr2 are : 11,12
// Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}
int main()
{
    int n;
    cin >> n;
        int m;
    cin >> m;
    set<int> st;
    vector<int> arr(n);
        vector<int> brr(n);
          cout << "enter first array"<<'\n';
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }


    // print to verify
    cout << "enter second array"<<'\n';
    for (int j = 0; j < m; j++)
    {
        cin >> brr[j];
    }
    cout << '\n';

     //SET APPROACH 
     for(int i=0;i<n;i++)
     {
         st.insert(arr[i]);
     }
     for(int i=0;i<n;i++)
     {
         st.insert(brr[i]);
     }
     for(auto it : st)
     {
         cout << it << ' ';
     }
     //TL: M+N O(M+N)
}
