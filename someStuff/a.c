#include<stdio.h>
#include<stdlib.h>
struct bonk{
  int age;
  char name;
};
int main (int argc, char *argv[])
{
  struct bonk *bon = malloc(sizeof(struct bonk));
  bon->age = 12;
  printf("%d \n",bon->age);
  
  return 0;
}
