
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
  // // print to verify  //  for (int i = 0; i < n; i++)  //  {  //      cout << arr[i] << " ";  //  }
      cout << '\n';
      int single=0;
      int count =0;
      int flag=0;             
             for(int i=0;i<n;i++)
             {
                 mp.insert(arr[i]);
             }
 //     for(auto it = mp.begin(); it != mp.end(); it++)
 // {
 //     cout << *it << " ";
 // }
 auto i= mp.begin();
 while(i!=mp.end())
 {
     count =0;
     auto j = next(i);
     if(j!=mp.end())
     {
         if(*i==*j)
         {
         mp.erase(j);
         count ++;
         }      
     }
     if(count ==0)
     {
         single=*i;
         break;
     }
     i++;
 }
}
       cout <<single;
 tl:n logn
