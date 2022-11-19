#include <stdio.h>

int main (int argc, char *argv[])
{

  int ages[]={1,2,3,41};

  int *pAges=ages;
  int i =0;
  int count = sizeof(ages) / sizeof(int);
  for (i=0;i<count;i++){
    printf("%d : %p  \n",pAges[i],pAges+i);
  }
  return 0;
}
