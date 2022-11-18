#include <stdio.h>
int main(int argc ,char *argv[]){
  int x = 4;
  int *pX=&x;
  int y =*pX;

  printf("%p \n",pX);
  
  printf("%d \n",y);
  
}
