#include <stdio.h>
#include <string.h>

FILE * f1;
char str[80];

int changePass(int i, int line){
        printf("Username found. Please enter the new password: ");
        char pass[80];
        scanf("%s", pass);
        int j=0;
        str[i] = ' ';
        i++;
        while (pass[j] != '\0'){
                str[i] = pass[j];
                i++;
                j++;
        }
        str[i] = '\0';
		rewind(f1);
        char garbage[80];
        int x = 1;
        while(x < line){
                fgets(garbage, 80, f1);
                x++;
        }
        fputs(str, f1);
        return 0;
}

int main(int argc, char *argv[]){
        if (argc != 3){
                printf("Incorrect number of arguments.");
				return 1;
        }

        char name[80];
        int line = 0;
        char * checker = name;
        checker = argv[2];
        f1 = fopen(argv[1], "r+");
        while (fgets(str, 80, f1) != NULL){
                line++;
                int i = 0;
                char temp[80];
                while (str[i] != ' '){
                        temp[i] = str[i];
                        i++;
                }
				temp[i] = '\0';
                if (strcmp(checker, temp) == 0){
                        changePass(i, line);
                        return 0;
                }
        }
        printf("Name not Found");
        return 1;
}