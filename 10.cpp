#include <iostream>
#include <math.h> 
using namespace std;

int main() {
	int n,m,i,sum,N[1000000],M[1000000];
	cin>>n;
	for(i=0;i<n;i++)
	{   cin>>N[i];
	    sum+=(pow(10,n-1-i))*N[i];
	}
	cin>>m;
	for(i=0;i<m;i++)
	{   cin>>M[i];
	    sum+=(pow(10,m-1-i))*M[i];
	}
	cout<<sum;
	return 0;
}
