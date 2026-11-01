#include <stdio.h>
int main () {
  int x = 6, y = 2, z = 6;
  printf("Equal to: %d\n", x==z);
  printf("Not equal to: %d\n", x!=y);
  printf("Greater than: %d\n", x>y);
  printf("Less than: %d\n", x<y);
  printf("Greater than or equal to: %d\n", x>=y);
  printf("Less than or equal to: %d\n", x<=y);
  printf("AND: %d\n", x<5 && x<10);
  printf("OR: %d\n", x<5 || x<2);
  printf("NOT: %d\n", !(x<5 && x<10));
return 0;
}

