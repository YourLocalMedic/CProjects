#include <stdio.h>

int main(){
  
  int a = 69;
  int b = 420;
  
  a ^= b; // assign a to be equal to xor(a, b)
  b ^= a;
  a ^= b;
  
  printf("%d, %d\n", a, b);

  return 0;
}
