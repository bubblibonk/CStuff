#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Person{
  char *name;
  int age;
  int height;
  int wheight;
};
void fre(struct Person *who){
  assert(who!=NULL);
  free(who->name);
}
struct Person *Person_create(char *name,int age,int height,int wheight){

  struct Person *who = malloc(sizeof(struct Person));
  assert(who!=NULL);  
  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->wheight = wheight;
  return who;

};
void personPrint(struct Person *who){
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->wheight);
}

int main (int argc, char *argv[])
{

  struct Person *who = malloc(sizeof(struct Person));
  who->name = "hemlu";
  struct Person *bonk=Person_create("Bonk",12,14,13);
  
  //bonk->name=strdup(who->name);
  printf("%s \n",bonk->name);
  personPrint(bonk);
  fre(bonk);
  return 0;
}

