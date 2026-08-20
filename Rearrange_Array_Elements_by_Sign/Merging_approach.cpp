#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    vector<int> pos;
    vector<int> neg;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    vector<int> ans;

    int i = 0, j = 0;

    while(i < pos.size() && j < neg.size())
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[j]);

        i++;
        j++;
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
