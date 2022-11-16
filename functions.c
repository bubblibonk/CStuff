#include <stdio.h>
int sum(int a, int b);
void printArg(int argc,char *argv[]);
void printStar(int n);
void printStar(int n){
  for(int i=0;i<n;i++)

    printf("%c",'*');
}
void printArg(int argc,char *argv[]){
  int i=0;
  for(i=0;i<argc;i++){
    printf("arg %d:%s \n",i,argv[i]);
    
  }
  
}
int main (int argc, char *argv[]){

  int a=9;
  int b=10;
  int c=sum(a,b);
  printf("%d \n",c);
  printStar(7);
  printArg(argc,argv);
}
int sum(int a , int b){
  return a+b;
}



