#include "stdio.h"
#include "stdlib.h"
#include "sys/time.h"
#include "time.h"

extern void dgemm_(char*, char*, int*, int*,int*, double*, double*, int*, double*, int*, double*, double*, int*);

int main(int argc, char* argv[])
{
  int i;
  printf("test!\n");


  double x[2] = {2.0,2.0};
  double y[2] = {0.0,0.0};
  double B[4] = {1.0, 0.0, 0.0,1.0};
  cblas_dgemv(102,111, 2, 2, 1, B, 1, x, 1, 1, y, 1);

  printf("%d, %d\n", y[0],y[1] );

  return 0;
}