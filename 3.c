#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int t, n, *A, i, sum=0;
	scanf("%d", &t);
	while(t>0) {
		scanf("%d", &n);
		A=(int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++) {
			scanf("%d", (A+i));
			sum+=*(A+i);
		}
		printf("%d\n", sum);
		sum=0;
		t--;
	}
	free(A);
	return 0;
}
