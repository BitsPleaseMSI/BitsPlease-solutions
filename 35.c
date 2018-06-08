#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAXSIZE 5  //size of matrix can be changed from here

void Enter(int A[][MAXSIZE], int);
void Show(int A[][MAXSIZE], int);
int detA(int A[][MAXSIZE], int);
void Minor(int A[][MAXSIZE], int M[][MAXSIZE], int, int, int);

void main() {
	int A[MAXSIZE][MAXSIZE], size, det;
	scanf("%d", &size);
	Enter(A, size);
	det = detA(A, size);
	printf("%d", det);
	getch();
}

void Enter(int A[][MAXSIZE], int size) {
	int i, j;
	for (i=0; i<size; i++) {
		for (j=0; j<size; j++) {
			scanf("%d", &A[i][j]);
		}
	}
}

int detA(int A[][MAXSIZE], int size) {
	int det = 0, i;
	int M[size-1][size-1];
	if (size==1) return A[0][0];
	else {
		for (i=0; i<size; i++) {
			Minor(A, M, 0, i, size);
			det = det + (pow(-1, i) * A[0][i] * detA(M, size-1));
		}
		return det;
	}
}

void Minor(int A[][MAXSIZE], int M[][MAXSIZE], int I, int J, int size) {
	int i, j, k=0, l=0;
	for (i=0; i<size; i++) {
		if (i!=I) {
			for (j=0; j<size; j++) {
				if (j!=J) {
					M[k][l] = A[i][j];
					l++;
				}
			}
			l=0;
		k++;
		}
	}
}
