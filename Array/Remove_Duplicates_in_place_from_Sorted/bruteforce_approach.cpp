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
  set <int> st;
     int index=0;
     for (int i = 0; i < n; i++)
     {
         st.insert(arr[i]);
     
     for(auto it : st)
     {
         arr[index]=it;
        cout << arr[index]<<'\n';
         index++;
     }
     cout << index <<'\n';
