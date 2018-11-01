#include "stdio.h"
#include "string.h"

char outCh;

int main() {
  char inCh;
  int input;
  printf("Base of input integer: Enter b for binary, d for decimal, h for hexadecimal or o for octal: ");
  scanf("\n%c", &inCh);
  
  printf("Enter the base of the output (d, h or o): ");
  scanf("\n%c", &outCh);
  
  printf("Enter input integer: ");
  char str[100];
  switch (inCh) {
    case 'd' : scanf("%d", &input);
		printf("The decimal integer %d", input);
	break;
    case 'h' : scanf("%x", &input);
		printf("The hexidecimal integer %x", input);
	break;
    case 'o' : scanf("%o", &input);
		printf("The octal integer %o", input);
	break;
    case 'b' : scanf("%s", str);
    printf ("The binary integer %s", str);
    inputBinary(str); 
    finish();
    return 0;
  }
  
  switch (outCh){
    case 'd' : printf(" in decimal is %d\n", input); break;
    case 'h' : printf(" in hexidecimal is %x\n", input); break;
    case 'o' : printf(" in octal is %o\n", input); break;
  }
  
finish();
return 0;
}

int inputBinary(char str[]){
    int i;
    int length;
    length = strlen(str);
    int answer = 0;
    int current = length-1;
    for (i=0; i<length; i++){
      if (str[current] == '1'){
         answer += (1 << i);
      }
      current --;
    }
    
    switch (outCh){
    case 'd' : printf(" in decimal is %d\n", answer); break;
    case 'h' : printf(" in hexidecimal is %x\n", answer); break;
    case 'o' : printf(" in octal is %o\n", answer); break;
  }
  
return 0;
}

int finish() {
  char again;
  printf("Would you like to enter another number? ");
  scanf("\n%c", &again);
  if (again == 'y' || again == 'Y') return main();
  return 0;
}