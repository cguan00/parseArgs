#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Use the following header: char ** parse_args( char * line );
// It should take a string with the command line invocation of a program (like "ls -a -l")
//     Note that there is a " " between each argument
// Return an array of pointers to each individual argument in the parameter string, that could be used for execvp()
// For example, the following code should work (assuming all variables are declared appropriately:
//     char ** args = parse_args( line );
//     execvp(args[0], args);
// You can make the following assumptions:
//     There is only 1 space between each argument in the original string
//     The original string contains no more than 5 arguments
//     The original string is correctly formatted


char ** parse_args( char * line ){
  int args = 5;
  char ** output = calloc (args, sizeof(char*));

  output[0] = "";
  output[1] = "";
  output[2] = "";
  output[3] = "";
  output[4] = "";

  for(; args -=1; args > 0 ){
    while(&line != NULL){

    }
  }
  while(&line != NULL){

  }
  output[0] = strsep(&line, " ");
  output[0] = strsep(&line, " ");
  output[0] = strsep(&line, " ");
  output[0] = strsep(&line, " ");
  output[0] = strsep(&line, " ");


  printf("%s\n", line);
  return output;
}

int main(){
  char *input = "ls -a -l";
  parse_args(input);

  char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  return 0;
}
