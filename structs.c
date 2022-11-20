#include<stdio.h>
#include<string.h>

struct Player{
  char name[12];
  int score;
  
};



int main (int argc, char *argv[])
{
  struct Player Player2;
  Player2.score = 2;
  strcpy(Player2.name,"bonk");

  printf("%d,%s \n",Player2.score,Player2.name);
  


  return 0;
}
