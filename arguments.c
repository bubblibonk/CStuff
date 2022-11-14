#include <stdio.h>

int main( int argc, char *argv[] )  {
  int i=0;
  if(argc==1){
    printf("Please enter an argument \n");
  } 
  for(i=1;i<argc;i++){
    printf("value is:%s \n",argv[i]);
    
  }
  i = i-1;
  printf("The number of values are %d \n",i);
   
  return 0;
}
