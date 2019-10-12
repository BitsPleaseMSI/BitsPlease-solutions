# include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n, i;
	cin>>n;
	int ar1[n];
	for (int i = n - 1; i >= 0; --i)
		cin>>ar1[i];
	cin>>m;
	int ar2[m];
	for (int i = m - 1; i >= 0; --i)
		cin>>ar2[i];
	int maxm = max(m, n); //maximum size the result array can be
	int result[maxm + 1];
	for (i = 0; i < maxm + 1; i++)
		result[i] = 0; //making all elements 0
	for (i = 0; i < maxm; ++i){
		result[i] += ar1[i] + ar2[i];
		if (result[i] >= 10)
			result[i + 1]  += result[i]/10; //carrying forward the tenths place
			result[i] = result[i] % 10; //retaining the units place
	}
	for (i = maxm; result[i] == 0; --i); //To find index from where the number starts in result array
	for (; i >= 0; --i)
		cout<<result[i]; //printing result
	return 0;
}