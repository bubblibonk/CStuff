#include<stdio.h>
struct Person{
  char *name;
  int age;
};
int main (int argc, char *argv[])
{
  struct Person *who = malloc(sizeof(struct Person));
  who->name = "bonk";
  who->age = 12;
  printf("%s %d \n",who->name,who->age);
  return 0;
}
