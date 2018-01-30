#include <stdio.h>
#include <string.h>
//to find groups of '1's
int main(void) {
	char A[20];
	int i, j, k, t, count=0;
	scanf("%d", &t);
	for(i=0; i<t; i++) { //loop 1
		scanf("%s", &A);
		for(j=0; j<strlen(A); j++) { //loop 2 from 0 index of string till strlen
			if(A[j]=='1') { //checks for '1'
				if(A[j+1]=='1') { //checks for adjacent '1'
					for(k=j; A[k]!='0'; k++); //moves index to '0'
					j=k; count++; //count incremented, index skipped
				}
			}
		}
		printf("%d\n", count);
		count=0;
	}
	return 0;
}
