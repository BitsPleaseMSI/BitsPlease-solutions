#include <stdio.h>

int main(void) {
	int n, x, y, i, j, flag;
	scanf("%d", &n);
	while(n>0) {
		scanf("%d %d", &x, &y);
		for(i=x; i<=y; i++) {
			flag=0;
			for(j=2; j<i; j++) {
				if(i%j==0) {
					flag=1;
					break;
				}
			}
			if(flag==0) printf("%d ", i);
		}
		printf("\n");
		n--;
	}
	return 0;
}
