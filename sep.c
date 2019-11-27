#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char ** parse_args (char * line) {

    //debug
    printf("%s\n",line);

    char * array[6];
    char * token = strsep(&line, " ");
    int i = 0;

    while(token != NULL) {

        //debug
        printf("%s\n",line);

        array[i] = token;
        token = strsep(&line, " ");
        i++;
    }
    array[i] = NULL;
   
   return array;
}

int main() {

    char * string = "ls -l -a apple";

    parse_args(string);

    return 0;
}