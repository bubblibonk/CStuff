#include<stdio.h>
int main (int argc, char *argv[])
{
  FILE *file;
  file = fopen("file.txt","w");
  fprintf(file, "%s %s %s %d", "We", "are", "in", 2012);
  return 0;
}
