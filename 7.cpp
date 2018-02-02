/*  Solution to Problem 7  */

#include<iostream>
using namespace std;

int main()
{
	int n;			/* No .of test cases*/
	int l,m,k;
	int start;
	int s;
	
	cin>>n;
	
	int Ar[n][2];		/* Array declaration to store 2 numbers for each test case*/
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
			{	
				cin>>Ar[i][j];
			}
	}
	
	for(int i=0;i<n;i++)			/* The OUTER MOST two loops are handling the 2-D array*/
	{
		for(int j=0;j<2;j++)
			{	
				k=j;
				for(start=Ar[i][k];start<=Ar[i][k+1];start++)  /* This loop is calculating the Primes*/
				{
					s=0;				/* The number is Prime ( it is just a temp variable) */
					for(l=2;l<=start/2;l++)
					{
						if(start % l == 0)
						{
							s=1;		/* The number is non-prime (again a temp variable) */
							break;
						}
					}
					if(s == 0)
					cout<<start<<" ";
				}
			}cout<<endl;
	}
return 0;	
}
