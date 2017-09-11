#include <bits/stdc++.h>
using namespace std;

//all debug code is commented

int n = 0,
	x = 0,
	y = 0,
	con = 1,
	a[20][20],
	src[2] = {0},
	l;

void mv1();
void mv2();
void mv3();
void mv4();

void chk(){
	if(a[x][y] == 2)
		con = 0;
	else if(a[x][y] == 1)
		con = -1;
}

void move(){
	if(con != 1)
		return;

	switch(l){
		case 1: mv2(); mv3(); mv4(); mv1(); break;
		case 2: mv3(); mv4(); mv1(); mv2(); break;
		case 3: mv4(); mv1(); mv2(); mv3(); break;
		case 4: mv1(); mv2(); mv3(); mv4();
	}
}

void mv1(){
	if(x + 1 < n && a[x + 1][y] != 0 && con == 1){
		x++;
		chk();
		l = 2;
		move();
	}
}

void mv2(){
	if(x > 0 && a[x - 1][y] != 0 && con == 1){
		x--;
		chk();
		l = 1;
		move();
	}
}

void mv3(){
	if(y + 1 < n && a[x][y + 1] != 0 && con == 1){
		y++;
		chk();
		l = 4;
		move();
	}
}

void mv4(){
	if(y > 0 && a[x][y - 1] != 0 && con == 1){
		y--;
		chk();
		l = 3;
		move();
	}
}

int main(){
	ios_base::sync_with_stdio(false);

	int t = 0;
	cin >> t;

	while(t--){
		x = 0;
		y = 0;
		con = 1;

		cin >> n;
		for(x = 0; x < n; x++){
			for(y = 0; y < n; y++){
				cin >> a[x][y];
				if(a[x][y] == 1){
					src[0] = x;
					src[1] = y;
				}
			}
		}

/*		cout << "\n\nQuestion:";
		for(x = 0; x < n; x++){
			cout << "\n";
			for(y = 0; y < n; y++)
				cout << a[x][y] << " ";
		}
*/
		x = src[0];
		y = src[1];

		for(int m = 1; m <= 4; m++){
			con = 1;
			l = m;
			//cout << "\n" << l << " ";
			move();
			if(con == 0)
				break;
		}

		if(con == 0)
			cout << "1\n";
		else
			cout << "0\n";
	}

	return 0;
}
