#include <stdio.h>
#include <string.h>
#define SIZE 30
//to find groups of '1's
int main(void) {
	char A[SIZE];
	int i, j, k, t, count=0;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%s", &A);
		for(j=0; j<strlen(A); j++){
			if(A[j]=='1'){
				if((j+1) < SIZE && A[j+1]=='1'){
					for(k=j; A[k]!='0'; k++);
					j=k;
					count++;
				}
			}
		}
		printf("%d\n", count);
		count=0;
	}
	return 0;
}
