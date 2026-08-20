// Single Number - I
// Subscribe to TUF+

// Hints
// Company
// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.


// Example 1

// Input : nums = [1, 2, 2, 4, 3, 1, 4]

// Output : 3

// Explanation : The integer 3 has appeared only once.

// Example 2

// Input : nums = [5]

// Output : 5

// Explanation : The integer 5 has appeared only once.

// Now your turn!

// Input : nums = [1, 3, 10, 3, 5, 1, 5]

// Output:

// Pick your answer
// ```
//   for(auto it : mp) //auto atuomatically takes dara type of data 
// {
//     cout << it << " ";
// }

//  for(auto it:mp;it<n;it++)
// ```

// {
// for(auto it+1\:mp;it<=n-1;it++)
// {
// count =0;
// if(arr[i]==arr[j])
// {
// break;
// count ++;
// }
// if(count ==0)
// {
// flag=1;
// break;
// }
// else
// continue;
// }
// if(flag == 1)
// {
// single=arr[i];
// break;
// }
// }
// cout <\<single; i want to search thru multiset just tell me syntax
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
multiset <int> mp;
vector<int> arr(n);
int num;

    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }

    // // print to verify
    //  for (int i = 0; i < n; i++)
    //  {
    //      cout << arr[i] << " ";
    //  }
//      cout << '\n';
//      int single=0;
//      int count =0;
//      int flag=0;
         
        
//             for(int i=0;i<n;i++)
//             {
//                 mp.insert(arr[i]);
//             }
// //     for(auto it = mp.begin(); it != mp.end(); it++)
// // {
// //     cout << *it << " ";
// // }
// auto i= mp.begin();
// while(i!=mp.end())
// {
//     count =0;
//     auto j = next(i);
//     if(j!=mp.end())
//     {
//         if(*i==*j)
//         {
//         mp.erase(j);
//         count ++;
//         }
        
//     }
//     if(count ==0)
//     {
//         single=*i;
//         break;
//     }
//     i++;
// }
//       cout <<single;
// tl:n logn
// better approach was hashing 

//optimal approach 
//xor approach
int xorr=0;
for(int i=0;i<n;i++)
{
    xorr=xorr^arr[i];
}
cout << xorr;
// tl:o(n)
    }
