#include <stdio.h>

int main (int argc, char *argv[]) {
        if (argc != 4) {
                exit(1);
        }

        FILE * f1, * f2, * f3;
        f1 = fopen (argv[1], "r");
        f2 = fopen (argv[2], "r");
        f3 = fopen (argv[3], "w");

        char str [80];
        char str1 [80];
        while (fgets (str, 80, f1) != NULL){
                fgets (str1, 80, f2);
                int i = 0;
                while (str[i] != '\n'){
                        i++;
                }
                str[i] = ' ';
                int j = 0;
                i++;
                while (str1[j] != '\0'){
                        str[i] = str1[j];
                        j++;
                        i++;
                }
                str[i] = '\0';
                fputs (str, f3);
        }
}
