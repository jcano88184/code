#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("The value of INT_MAX is %i\n", INT_MAX);
  printf("The value of INT_MIN is %i\n", INT_MIN);
  printf("An int takes %li bytes\n", sizeof(int));
  
  printf("The value of FLT_MAX is %f\n", FLT_MAX);
  printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
  printf("A float takes %li bytes\n", sizeof(float));
  
  printf("The value of CHAR_MAX is %i\n", CHAR_MAX);
  printf("The value of CHAR_MIN is %i\n", CHAR_MIN);
  printf("A char takes %li bytes\n", sizeof(char));
  
  printf("The value of DBL_MAX is %d\n", DBL_MAX);
  printf("The value of DBL_MIN is %.50d\n", DBL_MIN);
  printf("A double takes %d bytes\n", sizeof(double));
  
  printf("The value of SHRT_MAX is %hi\n", SHRT_MAX);
  printf("The value of SHRT_MIN is %hi\n", SHRT_MIN);
  printf("A short takes %i bytes\n", sizeof(short));
  
  printf("The value of LNG_MAX is %l\n", LNG_MAX);
  printf("The value of LNG_MIN is %.50l\n", LNG_MIN);
  printf("A long takes %l bytes\n", sizeof(long));
  
  return 0;
}
  