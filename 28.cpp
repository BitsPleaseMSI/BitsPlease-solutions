#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	/*
	 * Integer 'n' is declared for number of inputs
	 * arr is a pointer which is used to create dynamic array
	 * 'a' and 'b' are used to input numbers
	 * temp is used for processing of data
	*/
	int n, *arr, a, b, temp;
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		temp = 1;
		while (b > 0)
		{
			temp = temp * a;
			temp = temp % 10;		// Since we only need the last digit
			b--;
		}
		arr[i] = temp;
	}
	cout << "\n\n";
	for (int i = 0; i < n; i++)
		cout << "\n" << arr[i];
	getch();
	delete[] arr;
	return 0;
}

