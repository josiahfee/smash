#include <stdio.h>


int main (int argc, char *argv[]){
  sizeof bSize = 1000
  buffer = malloc(sizeof(char)*bSize)
  while(1){
    input = getline(&buffer, &bSize, stdin);
    if (strcmp(buffer,"exit")){
      exit(1);
    }
    printf("%s\n", buffer);
    printf("%s\n", buffer);
    printf("%s\n", buffer);
    printf("%s\n", buffer);
  }
}
