# include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n;
	// input array sizes and arrays
	cin >> n;
	int arr1[n];
	for (int i = n - 1; i >= 0; --i)
		cin >> arr1[i];
	cin >> m;
	int arr2[m];
	for (int i = m - 1; i >= 0; --i)
		cin >> arr2[i];
	int max_result_size = max(m, n); // maximum size the result array can be
	int result[max_result_size + 1];
	for (int i = 0; i < max_result_size + 1; ++i)
		result[i] = 0; // setting all elements to 0
	for (int i = 0; i < max_result_size; ++i) {
		result[i] += arr1[i] + arr2[i];
		if (result[i] >= 10)
			result[i + 1]  += result[i] / 10; // carrying forward the tenths place
		result[i] = result[i] % 10; // retaining the units place
	}
	int result_idx;  // to find index from where the number starts in result array
	for (result_idx = max_result_size; result[result_idx] == 0; --result_idx);
	// printing result
	for (int i = result_idx; i >= 0; --i)
		cout << result[i];
	return 0;
}
