#include <stdio.h>
sas;

int main (int argc, char *argv[])
{
  int i=0;
  for(i=1;i<argc;i++){
    printf("arg %d:%s \n",i,argv[i]);
  }
  char* states[]={
    "Calafornia","Bonk"
  };
  int numStates=2;
  for(i=0;i<numStates;i++){
    printf("States:%s \n",states[i]);
  }

  return 0;
}




