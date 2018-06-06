#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 3 //size of matrix can be changed from here

void EnterM(int A[][N], int);
void ShowM(int A[][N], int);
int detA(int A[][N], int);
void Minor(int A[][N], int M[][N], int, int, int);

void main() {
	int A[N][N], det;
	printf("Enter values in matrix:-\n");
	EnterM(A, N);
	printf("\n");
	ShowM(A, N);
	printf("Evaluating determinant:-\n");
	printf("\n");
	det = detA(A, N);
	printf("Determinant of entered matrix = %d", det);
	getch();
}

void EnterM(int A[][N], int n) {
	int i, j, k=0;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++, k++) {
			printf("Enter element %d: ", (k+1));
			scanf("%d", &A[i][j]);
		}
	}
}

void ShowM(int A[][N], int n) {
	int i, j;
	printf("Matrix elements:-\n");
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) 
			printf("%d ", A[i][j]);
		printf("\n");
	}
}


int detA(int A[][N], int n) {
	int det = 0, i;
	int M[n-1][n-1];
	if (n==1) return A[0][0];
	else {
		for (i=0; i<n; i++) {
			Minor(A, M, 0, i, n);
			ShowM(M, n-1);
			det = det + (pow(-1, i) * A[0][i] * detA(M, n-1));
			printf("det = %d\n", det);
		}
		return det;
	}
}

void Minor(int A[][N], int M[][N], int I, int J, int n) {
	int i, j, k=0, l=0;
	for (i=0; i<n; i++) {
		if (i!=I) {
			for (j=0; j<n; j++) {
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
