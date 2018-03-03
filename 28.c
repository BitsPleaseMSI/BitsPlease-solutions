#include <stdio.h>
#include <math.h>

int main(void) {
	int N, a, b, n, d, l;
	scanf("%d", &N);
	while(N>0) {
		scanf("%d %d", &a, &b);
		if(a>=0 && a<=30 && b>=0 && b<=pow(10, 12)) {
			d = a%10;
			switch(d) {
			case 0: if(b==0) printf("Undefined.\n");
				else printf("0\n");
				break;
			case 1: printf("1\n"); break;
			case 2: l = b%4;
				switch(l) {
				case 1: printf("2\n"); break;
				case 2: printf("4\n"); break;
				case 3: printf("8\n"); break;
				default: printf("6\n");
				}
				break;
			case 3: l = b%4;
				switch(l) {
				case 1: printf("3\n"); break;
				case 2: printf("9\n"); break;
				case 3: printf("7\n"); break;
				default: printf("1\n");
				}
				break;
			case 4: l = b%2;
				switch(l) {
				case 1: printf("4\n"); break;
				default: printf("6\n");
				}
				break;
			case 5: printf("5\n"); break;
			case 6: printf("6\n"); break;
			case 7: l = b%4;
				switch(l) {
				case 1: printf("7\n"); break;
				case 2: printf("9\n"); break;
				case 3: printf("3\n"); break;
				default: printf("1\n");
				}
				break;
			case 8: l = b%4;
				switch(l) {
				case 1: printf("8\n"); break;
				case 2: printf("4\n"); break;
				case 3: printf("2\n"); break;
				default: printf("6\n");
				}
				break;
			case 9: l = b%2;
				switch(l) {
				case 1: printf("9\n"); break;
				default: printf("1\n");
				}
				break;
			default: printf("Error.\n");
			}
		}
		else printf("a or b not in range.\n");
		N--;
	}
	return 0;
}
