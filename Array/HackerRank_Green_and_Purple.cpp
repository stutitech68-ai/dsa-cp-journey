#include<iostream>
using namespace std;
int main()
 {
int t ;
int a,b;
int n ;
int sum = 0;
int count,count1 ;
int cost , cost1;
// std :: cout << "enter testcases"<<'\n';
std :: cin >>t ; //testcases
for(int i=1;i<=t;i++)
{
	sum=0;
    // std :: cout << "enter price of green nd purple"<<'\n';
std :: cin >> a >> b; // cost of purple and green 
// std :: cout << "enter no. of columns" <<'\n';
std :: cin >> n; // no. of participants no. of columns 
	int arr[n][2];
    // std :: cout << "taking input for arrays " <<'\n';
	for(int j=0;j<n;j++)
	{

		for(int k=0;k<2;k++)
			{

			std :: cin >> arr[j][k];
			}

		}
	
count = 0;
count1 = 0;
		for(int k=0;k<n;k++)
		{
    count = count + arr[k][0];   // total for problem 1 (column 0)
    count1 = count1 + arr[k][1]; // total for problem 2 (column 1)
		}
// std :: cout << "count is " << count << '\n';
// std :: cout << "count1 is " << count1 << '\n';
    cost=a*count +b*count1;
     cost1=a*count1 +b*count;
    int result =min(cost,cost1);
     std :: cout << result<<'\n'  ;
    }
}
