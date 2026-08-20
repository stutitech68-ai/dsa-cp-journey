  #include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
    std ::cin >> t;
    for (int i = 0; i <= t; i++) // test cases loop
    {
        int n;
        std ::cin >> n;
        char arr[n][n];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                std ::cin >> arr[j][k];
            }
        }
        bool sym = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] = !arr[n - 1 - i][j])
                {
                    sym = false;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] != arr[i][n - 1 - j])
                {
                    sym = false;
                }
            }
        }
        if (sym == true)
        {
            std::cout << "YES" << '\n';
        }
        else
            std ::cout << "NO" << '\n';
    }
}
