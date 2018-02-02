/*Solution to problem 29*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;					/* No.of test cases */
	
	long long int ar[n],arr2[n];

	for(int j=0;j<n;j++)
	{
		cin>>ar[j];			/* Input seconds for each test case */
	}
	
	for(int i=1;i<=n;i++)
	{
		arr2[i-1] = pow(2,ar[i-1]);/* In 1 sec atom divides into 2 ,so in t sec atom divides into 2 ^ t*/
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr2[i]<<"\n";	
	}
return 0;
}
