#include "stdio.h"

int my_strlen (char s[]){
  int length = 0;
  char temp = s[length];
  while (temp != '\0'){
    length++;
    temp = s[length];
  }
  return length;
}

int my_strcpy (char s[], char t[]) {
  if (my_strlen(s) >= my_strlen(t)){
    int i;
    for (i = 0; i < my_strlen(s); i++){
      s[i] = t[i];
    }
    s[i+1] = '\0';
    printf ("After copying string 2 into string 1, string 1 is now: %s\n", s);
    return 1;
  }
  else {
    printf("Unable to copy string2 into string1. \n");
    return -1;
  }
}

char * my_strcat (char s[], char t[]) {
  char * concat = (char *) malloc (sizeof (char)*(1+my_strlen(s)+my_strlen(t)));
  char * temp = concat;
  char * s1 = s;
  char * s2 = t;
  while (*s1){
    *temp = *s1;
    temp++;
    s1++;
  }
  while (*s2) {
    *temp = *s2;
    temp++;
    s2++;
  }
  *temp = '\0';
  return concat;
}

void my_strreverse(char s[]) {
  char * front = s;
  char * back = s+my_strlen(s)-1;
  char temp;
  int half = my_strlen(s)/2;
  int i = 0;
  while (i < half){
    temp = *front;
    *front = *back;
    *back = temp;
    front++;
    back--;
    i++;
  }
  
}

int main(void) {
  char str1 [80];
  char str2 [80];
  int length1;
  int length2;
  printf("Please enter string 1: ");
  scanf("%s", str1);
  length1 = my_strlen (str1);
  printf("\nThe String length is %d\n\n", length1);
  printf ("Please enter string 2: ");
  scanf ("%s", str2);
  printf("\nThe String length is %d\n\n", my_strlen(str2));
  printf("The concatenation of the strings is: %s\n\n", my_strcat(str1, str2));
  my_strreverse(str1);
  printf ("string 1 reversed is: %s\n", str1);
  my_strcpy (str1, str2);
  return 0;
}