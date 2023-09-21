#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int inputx, inputy;

  printf("input two integers : ");
  scanf("%i %i", &inputx, &inputy);
  
  printf("+ result is %i \n", inputx + inputy);
  printf("- result is %i \n", inputx - inputy);
  printf("* result is %i \n", inputx * inputy);
  printf("/ result is %i \n", inputx / inputy);
  printf("%% result is %i \n", inputx % inputy);
  
  system("PAUSE");	
  return 0;
}
