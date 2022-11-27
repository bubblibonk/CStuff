#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
struct Person{
  char *name;
  int age;
  int height;
  int wheight;
};
int main (int argc, char *argv[])
{
  struct Person *who = malloc(sizeof(struct Person));
  assert(who!=NULL);
  return 0;
}
