#include "stdio.h"
int main() {
  int x;
  int count = 0;
  printf("Please enter a positive integer. Enter 0 to quit: ");
  scanf("%d", &x);
  if (!x) {
	  printf("Have a nice day.\n");
	  return 0;
  }
   else if (x < 0) {
     printf("This is not a positive integer.\n");
     return main();
   }
  else {
    int i;
    for (i=1; i<=x; i++){
      if (!(x % i)){
        printf("%d\n", i);
        count++;
      }
    }
      
    if (count == 2){
      printf("The number is prime.\n\n");
    }
    else {
      printf("The number is not prime.\n\n");
    }
  }
  return main();
}