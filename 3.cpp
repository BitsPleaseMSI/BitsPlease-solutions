#include <iostream>

using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{   int n,i,j,N[100000],var,sum=0,k,l;
	    cin>>n;
	    for(i=0;i<n;i++){
			cin>>N[i]; 
		}
	    var=-1000000;
	    for(i=1;i<=n;i++){
	        for(j=0;j<=n-i;j++){
	            k=i+j-1;
	            for(l=j;l<=k;l++){   
	                sum+=N[l];
	            }
	            if(var<sum)
	            {
	                var=sum;
	            }
	            sum=0;
				 }
	    }
	    cout<<var<<endl;
	}
	return 0;
}
