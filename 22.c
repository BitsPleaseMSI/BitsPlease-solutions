#include <stdio.h>

int main(void) {
  int t, n;
  scanf("%d", &t);
  while(t>0) {
    scanf("%d", &n);
    if(n==3) printf("0\n");
    else {
      n = (n * (n-3))/2;
      printf("%d\n", n);
  }
  t--;
  }
  return 0;
}
