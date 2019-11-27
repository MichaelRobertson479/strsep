#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char ** parse_args (char * line) {

    char ** array[6];
    int i = 0;

    for (i = 0; i < 5; i++) {

        printf("%s\n",line);
        array[i] = &strsep(&line, " ");
    }

    array[5] = NULL;
   
   return array;
}

int main() {

    char * string = "ls -l -a";

    parse_args(string);

    return 0;
}