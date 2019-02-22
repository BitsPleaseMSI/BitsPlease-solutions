#include <iostream>

using namespace std;

int CheckRepeat (int serial[9]) {
	int test, flag = 0;
	for (int j = 0; j < 7; j++) {
		test = serial[j];
		for(int i = 0; i < 9; i++) {
			if(serial[i] == test) {
				if(serial[i + 1] == test && serial[i + 2] == test)
					flag = 1;
			}
		}
	}
	return flag;
}

int main () {
	char serial_num[9];
	int serial[9], t, sum;
	cin >> t;
	while (t--) {
		sum = 0;
		cin >> serial_num;
		for (int i = 0; i < 9; i++)
			serial[i] = (int) serial_num[i] - 48;
		for(int i = 0; i < 9; i++) 
			sum = sum + serial[i];
		if(CheckRepeat (serial) && sum > 40 && sum % 9 ==0)
			cout << "Original" << endl;
		else cout << "Fake" << endl;
	}
	return 0;
}
