# include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Generate (int List[], int N) {
	for (int i = 0; i < N; i++) List[i] = i;
	List[0] = List[1];
}

void Mark (int List[], int N, int &prime) {
	for (int i = prime * prime; i < N; i += prime) 
		if (List[i] % prime == 0) List[i] = 0;
}

int FindNextPrime (int List[], int N, int &prime) {
	for (int i = (prime + 1); i < N; i++) {
		if (List[i] > prime && List[i] != 0) 
			return List[i];
	}
	return -1;
}

void PrintPrimes (int &L, int &U) {
	int *List = new int[U + 1];
	Generate (List, (U + 1));
	int prime = List[2];
	do {
		Mark (List, (U + 1), prime);
		prime = FindNextPrime (List, (U + 1), prime);
	}while (prime > 0);
	List[0] = List[1] = 0;
	for (int i = L; i <= U; i++) {
		if (List[i] != 0) cout << List[i] << " ";
		else continue;
	}
}

int main () {
	int T, x, y;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		PrintPrimes (x, y);
		cout << endl;
	}
	return 0;
}
