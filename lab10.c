
#include "stdio.h"
#include "ctype.h"

void read_input(char buffer[]) 
    {
        char character;
        int i = 0;
        do
        {
            character = getchar(); 
            buffer[i] = character; 
            ++i;
        }
        while ( 'z' != character );
        buffer[i - 1] = '\0'; 
    }
    
void printResults(char s[]){
  int whites = 0;
  int digits = 0;
  int lower = 0;
  int upper = 0;
  int temp = 0;
  while (s[temp] != '\0'){
    if (isspace(s[temp]))
      whites++;
    else if (isdigit(s[temp]))
      digits++;
    else if (isupper(s[temp])){
      upper++;
      s[temp] = tolower(s[temp]);
    }
    else if (islower(s[temp])){
      lower++;
      s[temp] = toupper(s[temp]);
    }
      
    temp++;
  }
  printf("Input with uppers and lowers swapped: \n%s\n", s);
  printf("Number of whitespaces: %d\n", whites);
  printf("Number of digits: %d\n", digits);
  printf("Number of upper case characters: %d\n", upper);
  printf("Number of lower cade characters: %d\n", lower);
}

int main (void){
    char input[100] = "";
    printf("Input message: ");
    read_input(input);
    printf("Input = %s\n", input);
    printResults(input);
    return 0;
}