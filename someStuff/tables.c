#include <stdio.h>
int main (int argc, char *argv[])
{
  int x = 17;
  int a = 1;
  while (a<11){
    int z = x*a;

    printf("%d \n",z);
    a+=1;
  }

  return 0;
}
