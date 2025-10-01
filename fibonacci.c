#include <stdio.h>
int main() {
  int n = 0, m = 1, i = 0 , a;
  printf("Enter a number:");
  scanf("%d", & a);
  printf("%d\n%d\n",n,m);

  i = n + m;

  while (i <= a) {
    printf("%d\n", i);
    n = m;
    m = i;
    i = n + m;
  }

  return 0;
}
