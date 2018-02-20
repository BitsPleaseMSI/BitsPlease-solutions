#include <stdio.h>
#include <string.h>
#define MAXSIZE 25

int main(void) {
	int N, i, j, flag=0, pos=-1, len;
	char S[MAXSIZE], ch;
	scanf("%d", &N);
	while(N>0) {
		scanf("%s %c", &S, &ch);
		len=strlen(S);
		for(i=0; i<len; i++) {
			if(ch==S[i]) {
				flag=1;
				pos=i+1;
				break;
			}
		}
		if(flag==1) {
			for(i=pos-1; i<len; i++) {
				if(ch==S[i]) {
					flag=2;
					break;
				}
			}
			if(flag==2) {
				for(i=len, j=0; i>0; i--, j++) {
					if(ch==S[i]) {
						i-=1;
						break;
					}
				}
				for(; i>0; i--, j++) {
					if(ch==S[i]) {
						pos=j+1;
						break;
					}
				}
				printf("%d\n", pos);
			}
			else printf("%d\n", pos);
		}
		else printf("%d\n", pos);
		N--;
		pos=-1;
	}
	return 0;
}
