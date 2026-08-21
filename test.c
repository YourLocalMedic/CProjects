#include <stdio.h>
#include <string.h>
int main(){

  char* output = "Hello, World!";
  printf("%s\n", output);


  for (int index = 0; index < strlen(output); ++index) {
    printf("%c\n", output[index]);
  } 

  char* this = "This";
  char* is = "is";
  char* sentence = "sentence";

  printf("%s", this);
  printf("%c", ' ');
  printf("%s", is);
  printf("%c", ' ');
  printf("%c", 'a');
  printf("%c", ' ');
  printf("%s", sentence);

  return 0;
}
