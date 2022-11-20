#include<stdio.h> 
#include<string.h>


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
  
  //pointers

  struct student{
    int age;
    char name[25];
  };
  struct student anil={30,"Anil"};
  struct student *ptr;

  ptr = &anil;
  (*ptr).age = 20;
  printf("%s %d \n",anil.name,anil.age);

  return 0;
}
