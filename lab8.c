#include "stdio.h"
int main(void) {
  int i1, i2;
  double d1, d2;
  printf("Adresses of Starting Variables:\n%p\n%p\n%p\n%p\n", &i1, &i2, &d1, &d2);
  
  int * intptr1;
  int * intptr2;
  double * dubptr1;
  double * dubptr2;
  printf("\nAdresses of Pointer Variables:\n%p\n%p\n%p\n%p\n", &intptr1, &intptr2, &dubptr1, &dubptr2);
  
  intptr1 = &i1;
  intptr2 = &i2;
  dubptr1 = &d1;
  dubptr2 = &d2;
  printf("\nValues of Pointer Variables:\n%p\n%p\n%p\n%p\n", intptr1, intptr2, dubptr1, dubptr2);
  intptr1 = intptr2;
  
  printf("\nValue of intptr1:\n%p\n", intptr1);
//  dubptr1 = intptr1;
//  printf("\nTrying to assign intptr1 to dubptr1 without typecasting:\n%p\n", dubptr1);
  dubptr1 = (double *) intptr1;
  printf("\nValue of dubptr1 after typecasting\n%p\n", dubptr1);
  
  intptr1 = NULL;
  printf("\nValue of intptr1 after assigning NULL:\n%p\n", intptr1);
  
  printf("\nValue of dereferenced intptr2:\n%d\n", *intptr2);
 // printf("\nValue of dereferenced intptr1:\n%d", *intptr1);
 
 *intptr2 = 100;
 printf("\n Value of i1, i2:\n%d\n%d\n", i1, i2);
 
 printf("\nValue of intptr2 + 1 and dubptr2 + 1:\n%p\n%p\n", (intptr2+1), (dubptr2+1));
 printf("\nValue of intptr2 - 1 and dubptr2 - 1:\n%p\n%p\n", (intptr2-1), (dubptr2-1));
 printf("\nValue of *intptr2 + 1 and *dubptr2 + 1:\n%d\n%d\n", (*intptr2+1), (*dubptr2+1));
 printf("\nValue of *intptr2 - 1 and *dubptr2 - 1:\n%d\n%d\n", (*intptr2-1), (*dubptr2-1));
 
 intptr1 = &i1;
 printf("\nintptr1 == intptr2 if\n%p == %p\n", intptr1, intptr2);
 printf("\n*intptr1 == *intptr2 if\n%d == %d\n", *intptr1, *intptr2);
 
 intptr1 = &i2;
 printf("\nintptr1 == intptr2 if\n%p == %p\n", intptr1, intptr2);
 printf("\n*intptr1 == *intptr2 if\n%d == %d\n", *intptr1, *intptr2);
 
 double * ptr;
 ptr = (double *) malloc (sizeof(double));
 *ptr = 3.1416;
 printf("\nValue of ptr and *ptr\n%p\n%d\n", ptr, *ptr);
 
 free ((void *)ptr);
 ptr = (double *) malloc (sizeof(double));
 printf("\nValue of ptr after deallocating and reallocating:\n%p\n", ptr);
 
  
  
  return 0;
}