#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     int sum,sum1;
     std :: cin >> t
      for(int i=0;i<=t;i++) // test cases loop
      {
     int n;
     std :: cin >> n;
     int arr[n][n];
          sum =0;
          sum1=0;
           if (n==2)
             {
                  for(int j=0;j<n;j++)
         {
             for(int k=0;k<n;k++)
             {
                 std :: cin >> arr[j][k];
             }
         }
                 for(int j=0;j<=(n+1)/2;j++) //controlling rows
             {
                 for(int k=0;k<n;k++) //controlling columns
                 {
                     sum=sum+arr[j][k]
                 }
             
             for(int j=(n+1)/2;j<n;j++) //controlling rows
             {
                 for(int k=0;k<n;k++)
                 {
                     sum1=sum1+arr[j][k];
                 }
             
             
         else
         {
          for(int j=0;j<n;j++)
         {
             for(int k=0;k<n;k++)
             {
                 std :: cin >> arr[j][k];
             }
         }
             for(int j=0;j<=(n-1)/2;j++) //controlling rows
             {
                 for(int k=0;k<n;k++) //controlling columns
                 {
                     sum=sum+arr[j][k]
                 }
             
             for(int j=(n-1)/2;j<n;j++) //controlling rows
             {
                 for(int k=0;k<n;k++)
                 {
                     sum1=sum1+arr[j][k];
                 }
             }
         }
         if(sum1==sum)
         {
             std :: cout << "YES"<<'\n';
         }
         else
         std:: cout << "NO" << '\n';
     }
