#include <stdio.h>

int main(void) {
	int a, b, n, d, l;
	scanf("%d %d", &a, &b);
	if(a==0) {
		if(b==0) printf("Undefined.\n");
		else printf("0\n");
	}
	else {
		for(n=1; n<10; n++) {
			d = a%n;
			switch(d) {
				case 1:
				case 
			}
			if(d==1) printf("1\n");
			else if(d==2) {
				l = b%4;
				if(l==1) printf("2\n");
				else if(l==2) printf("4\n");
				else if(l==3) printf("8\n");
				else printf("6\n");
			}
			else if(d==3) {
				l = b%4;
				if(l==1) printf("3\n");
				else if(l==2) printf("9\n");
				else if(l==3) printf("7\n");
				else printf("1\n");
			}
		}
	}
	return 0;
}
