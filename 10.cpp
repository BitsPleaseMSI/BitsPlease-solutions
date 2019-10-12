# include <iostream>

using namespace std;

int main(){
	int n, m, i;
	int ar1[10], ar2[10], result[10];
	for (i = 0; i < 10; ++i)
		ar1[i] = ar2[i] = result[i] = 0; //sets all elements of array to 0

	cin>>n;
	for (i = n - 1; i >= 0; --i)
		cin>>ar1[i]; //input first array
	cin>>m;
	for (i = m - 1; i >= 0; --i)
		cin>>ar2[i]; //input second array

	for (i = 0; i < 10; ++i){
		result[i] += ar1[i] + ar2[i];
		if (result[i] >= 10)
			result[i + 1]  += result[i]/10; //carrying forward the tenths place
			result[i] = result[i] % 10; //retaining the units place
	}

	for (i = 9; result[i] == 0; --i); //To find index from where the number starts in result array

	for (; i >= 0; --i)
		cout<<result[i]; //printing result
	return 0;
}