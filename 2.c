#include <stdio.h>
int main(void) {
	int n, x, y, gcd, i;
	scanf("%d", &n);
	while(n>0) {
		scanf("%d %d", &x, &y);
		for(i=1;i<x||i<y;i++) {
			if(x%i==0&&y%i==0)
				gcd = i;
		}
		printf("%d\n", gcd);
		n--;
	}
	return 0;
}
