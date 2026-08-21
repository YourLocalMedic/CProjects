#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int array[101];
  int array_size = 0;

  srand(time(0));
  int dup = rand()%100 + 1;

  for (int index = 0; index <= 100; ++index) {
    if (index == dup) {
      array[array_size] = dup; // some random value will be duplicated 
      ++array_size;
    }
    array[array_size] = index;
    ++array_size;
  }
  
  int a;
  for (int i = 0; i <= sizeof(array)/sizeof(array[0]); ++i) {
    if (i == 0) {
      a = array[i];
    } else {
      a ^= array[i]; // this results in a setup like 1^2^3^4^5 where dup is missing because it cancels itself out 
    }
    if (i <= 100) {
      a ^= i; // xoring again with all of the possible values will cancel out everything besides dup and reintroduce dup
    }
  }

  printf("dup was %d and it was calculated to be %d", dup, a);

  return 0;
}
