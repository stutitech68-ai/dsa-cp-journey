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
long long maxi=LLONG_MIN;
long long  sum=0;
for(long long i=0;i<n;i++)
    {
        sum=sum+arr[i];
      
    if(sum > maxi)
    maxi = sum;

    if(sum < 0)
    sum = 0;
    }
    cout << maxi;
// tl:O(N)
}
