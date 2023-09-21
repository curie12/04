#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input;
    int sec, min, hr;

    printf("input the second : ");
    scanf("%i", &input);
  
    sec = input % 60;
    min = (input/60)%60;
    hr = input/3600;
    
    printf("The time for %i second is %i : %i : %i \n", input, hr, min, sec);
  
    system("PAUSE");
    return 0;
}
