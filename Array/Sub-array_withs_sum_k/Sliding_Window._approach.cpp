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

int length = 0;
    int l = 0;
    int r = l+1;
    int sum = arr[0];

    while(r < n)
    {
        while(l < r && sum > k)
        {
            sum += sum - arr[l];
            l++;
        }

        if(sum == k)
        {
            max_len = max(max_len, l - r + 1);
        }

        r++;

        if(r < n)
        {
            sum += arr[r];
        }
    }

    cout << max_len;
}
