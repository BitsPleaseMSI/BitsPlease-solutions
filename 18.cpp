#include<iostream>
using namespace std;

int main()
{
	 int i,n,sume=0,sumo=0;
	 
	 cin>>n;
	 int arr[n];
	 
	 for(i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 	if(arr[i]%2==0)
	 	{
	 		sume+=arr[i];
		}
		else if(arr[i]%2!=0)
		{
			sumo+=arr[i];
		}
	 }
	 cout<<sumo<<" "<<sume;
	 
return 0;	 
}
