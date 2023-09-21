#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int year;

  printf("input the year : ");
  scanf("%i", &year);
  
  if( (year%4==0 && year%100!=0) || year%400==0 )
      printf("Is the year %i the leap year? : 1 \n", year);
  else
      printf("Is the year %i the leap year? : 0 \n", year);
  
  system("PAUSE");
  return 0;
}
