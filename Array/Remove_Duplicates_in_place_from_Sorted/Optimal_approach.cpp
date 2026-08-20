int main()
{
    int n;
    cin >> n;
    int num;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  for (int i = 0; i < n; i++)
      {
         cout << arr[i] << " ";
     }
int count = 0;

if (n == 0)
{
    return 0;
}

int i = 0;
int j = 1;

while (j < n)
{
    if (arr[i] != arr[j])
    {
        arr[i + 1] = arr[j];
        i++;
    }

    j++;
}

count = i + 1;

// for (int k = 0; k < count; k++)
// {
//     cout << arr[k] << " ";
// }

cout << "\ncount is " << count;

return 0;
            }
