#include <bits/stdc++.h>
using namespace std;

int main() 
{
    //diff=arr[i]-arr[i+1];
           //if (diff> maxvalue )
           // break;
           // else
            //count ++
           
//  Input      Output
// 3           1        
// 1           2
// 10          2
// 3
// 8 3 6
// 5
// 4 5 1 2 3

    int t,n;
    int count ;
    std:: cin >> t;
int min=INT_MAX;
for(int i=0;i<t;i++)
{
    count = 1;
    std :: cin >>n;
    int arr[n];
    for (int k = 0; k < n; k++)
        {
            std ::cin >> arr[k];
        }
            for (int k = 0; k < n; k++)
                {
                    
                    if(arr[k]<=min)
                    {
                        count=count+1;
                        arr[k]=min;
                    }
                    else
                    continue;

                }
                std :: cout << count<<'\n' ;
}
}


