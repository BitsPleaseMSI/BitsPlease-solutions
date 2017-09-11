#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,y;
	cin>>t;

	while(t--)
	{
		cin>>x>>y;
		while(x!=y)
		{
			if(x>y)
				x = x - y;
			else
				y = y - x;
		}
		cout<<x<<"\n";
	}

	return 0;
}
