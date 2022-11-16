#include<stdio.h>
void printStr(char str[]){
  int i=0;
  while(str[i]!='\0'){
    printf("%c",str[i]);
    i++;
  }
}
int main (int argc, char *argv[])
{
  char str[4]={'b','o','n','k'};
  str[4]='a';//this line breaks it huehue
  //printStr(str);
  printf("%s \n",str);
  return 0;
}
