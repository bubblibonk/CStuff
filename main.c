#include<stdio.h>
void printStr(char str[]){
  int i=0;
  while(str[i]!='\0'){
    printf("%c \n",str[i]);
    i++;
  }
}
int main (int argc, char *argv[])
{
  char str[]={'b','o','n','k'};
  //printStr(str);
  printf("%s\n",str);
  return 0;
}
