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
 map<int,int> mp;
     for(int i=0;i<n;i++)
     {
        mp[arr[i]]++; // stores element as key 
     }
     for(int i=0;i<n;i++)
     {
        mp[brr[i]]++;
     }
     for(auto it : mp)
     {
         cout << it.first << ' ';
     }
    

    // //TL : M+N(LOG(M+N))
    return 0;
}
