#include <stdio.h>
int main () {
  int x = 6;
  x=6;
  printf("%d\n", x);
  x+=2;
  printf("%d\n", x);
  x-=2;
  printf("%d\n", x);
  x*=2;
  printf("%d\n", x);
  x/=2;
  printf("%d\n", x);
  x%=2;
  printf("%d\n", x);
  x&=2;
  printf("%d\n", x);
  x|=2;
  printf("%d\n", x);
  x^=2;
  printf("%d\n", x);
  x>>=2;
  printf("%d\n", x);
  x<<=2;
  printf("%d\n", x);
return 0;
}

