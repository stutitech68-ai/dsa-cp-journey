  #include <iostream>
#include <climits>
using namespace std;
int main() 
{
  int  ans=0;
    int i;
    int mn=INT_MAX ;

    //std:: cout << "enter test cases"<<'\n';
     int t;
     std :: cin >> t; // test cases
      int k ,n ;
for(int a=1;a<=t;a++)
{
   // std:: cout << "enter no. of elements"<<'\n';
          std ::cin >> n;
        int arr[n];
         //std:: cout << " enter target k" <<'\n';
          std ::cin >> k;
             
        for(int j=0;j<n;j++)
        {
            
              std ::cin >> arr[j] ;
              std ::cout << ' ';
              ans =min(mn,arr[j]);
        }
         ans=max(0,k-mn);
        std :: cout << ans<<'\n' ;

}
}
