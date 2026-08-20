
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

    // print to verify
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << '\n';
    int l=0,r=l+1;
    while(l<arr.size())
    {
        if(r<0)
        {

            arr[l+1]=arr[r];
            break;
        }
        l++;
        r++;
      
    }
    return 0;
}
