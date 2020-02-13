#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int get_arg_num(char* input){
  char* p = strsep(&input," ");
  int i = 0;
  while (p != NULL){
    if (strcmp(p,"")!=0){
      i++;
    }
    p = strsep(&input," ");
  }
  return i;
}

char** parse_input (char* raw_input){
  size_t argSize = 200;
  // copy input string
  char* str = strdup(raw_input);
  // We will alter p, so we will need to save its original value
  char* str_backup = str;
  // get arg num
  int argNum = get_arg_num(str);
  // get point to first arg
  char *p = strsep(&str," ");
  // make a char pointer array and store each arg
  char **argArr = malloc(argNum * sizeof(char *));
  for (int i = 0; i < argNum; i++){
    argArr[i] = malloc(argSize * sizeof(char));
    argArr[i] = p;
    p = strsep(&str," ");
  }
  free(str_backup);
  return argArr;
}


int main (int argc, char *argv[]){
  // size of input that we will allow
  size_t bSize = 1000;
  // Stores the input
  char *buffer = malloc(sizeof(char)*bSize);
  printf("smash> ");
  while(1){
    int chars_written = getline(&buffer, &bSize, stdin);
    // char **argArr = parse_input(buffer);
    // int argNum = get_arg_num(buffer);
    // for (int i = 0; i<argNum; i++){
    //   printf("%s\n", argArr[i]);
    // }
    if (chars_written != -1){
      buffer[chars_written-1]='\0';
      if (strcmp(buffer,"exit") == 0){
        exit(0);
      }
      printf("smash> ");
    }
  }
}
