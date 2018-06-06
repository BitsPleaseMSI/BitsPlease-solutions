#include <stdio.h>
#include <conio.h>
#include <math.h>
#define NUM 3 //size of matrix can be changed from here

void Enter(int A[][NUM], int);
void Show(int A[][NUM], int);
int detA(int A[][NUM], int);
void Minor(int A[][NUM], int M[][NUM], int, int, int);

void main() {
	int A[NUM][NUM], det;
	printf("Enter values in matrix:-\n");
	Enter(A, NUM);
	printf("\n");
	Show(A, NUM);
	printf("\nEvaluating determinant:-\n");
	det = detA(A, NUM);
	printf("Determinant of entered matrix = %d", det);
	getch();
}

void Enter(int A[][NUM], int num) {
	int i, j, k=0;
	for (i=0; i<num; i++) {
		for (j=0; j<num; j++, k++) {
			printf("Enter element %d: ", (k+1));
			scanf("%d", &A[i][j]);
		}
	}
}

void Show(int A[][NUM], int num) {
	int i, j;
	printf("Matrix elements:-\n");
	for (i=0; i<num; i++) {
		for (j=0; j<num; j++) 
			printf("%d ", A[i][j]);
		printf("\n");
	}
}


int detA(int A[][NUM], int num) {
	int det = 0, i;
	int M[num-1][num-1];
	if (num==1) return A[0][0];
	else {
		for (i=0; i<num; i++) {
			Minor(A, M, 0, i, num);
			det = det + (pow(-1, i) * A[0][i] * detA(M, num-1));
		}
		return det;
	}
}

void Minor(int A[][NUM], int M[][NUM], int I, int J, int num) {
	int i, j, k=0, l=0;
	for (i=0; i<num; i++) {
		if (i!=I) {
			for (j=0; j<num; j++) {
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
