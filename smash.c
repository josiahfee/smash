#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int parse_input (char* raw_input){
return 0;
}

int main (int argc, char *argv[]){
  size_t bSize = 1000;
  char *buffer = malloc(sizeof(char)*bSize);
  char *input_com = malloc(sizeof(char)*bSize);
  printf("smash> ");
  while(1){
    int chars_written = getline(&buffer, &bSize, stdin);
    char *arg_v[] = parse_input(chars_written);
    if (chars_written != -1){
      printf("smash> ");
    }
    if (strcmp(buffer,"exit") == 0){
      printf("\n");
      exit(0);
    }
  }
}
