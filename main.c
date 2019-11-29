#include <stdio.h>
#include <string.h>

int *stack;
int stackItems;

void compile(char *cmd) {
  char *ins;
  int i;
  for(i = 0; cmd[i] != ' '; i++)  {}
  strncpy(ins, cmd, i);
  if(strcmp(ins, "push")==0) {
     
  }
  if(strcmp(ins, "pop")==0) {
    
  }
  if(strcmp(ins, "out")==0) {

  }
}
