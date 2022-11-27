#include <stdio.h>

int main (int argc, char *argv[])
{

  int ages[]={1,2,3,41};

  int *pAges=ages;
  int i =0;
  int count = sizeof(ages) / sizeof(int);
  for (i=0;i<count;i++){
    printf("%d : %p  \n",pAges[i],pAges+i);
    printf("wee\n");
    
  }
  int *ags = ages;
  printf("%p \n",ags);
  char *names[]={
    "Alan","Frank","lisa"
  };
  count=3;
  char **nams = names;
  for(i=0;i<count;i++){
    printf("%s \n",*(nams+i));
     
  }
  int height = 100;
  int *cur_height = &height;
  int *cur_lol = cur_height;
  printf(" %d :height address is %p \n",*(cur_lol),cur_height);
  
  return 0;
}
