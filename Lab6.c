#include "stdio.h"
int main(void) {
  int x; int y; int z;
  printf("Enter Integer 1");
  scanf("%d", &x);
  printf("Enter Integer 2");
  scanf("%d", &y);
  printf("Enter Integer 3");
  scanf("%d", &z);
  int sum = x * y - z;
  printf("The sum of the integers is %d\n", sum);
  printf("This is a C program\n");
  printf("This is \n a C program\n");
  printf("This\n is\n a\n C\n program\n");
  printf("This\t is\t a\t C\t program\n");
  printf("*****\n****\n***\n**\n*\n");
  
  int arr[5];
  int digits;
  printf("Please enter a 5 digit integer");
  scanf("%d", &digits);
  int i;
  for (i=0; i<5;i++){
    arr[i] = digits % 10;
    digits /= 10;
  }
  int j;
  for (j=4; j>=0; j--){
    int temp = arr[j];
    printf("%d   ", temp);
  }
  return 0;
}