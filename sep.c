#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char ** parse_args (char * line) {

    char * array[6];
    int i;

    for (i = 0; i < 5; i++) {

        array[i] = strsep(line, " ");
        printf("%s\n",line);
    }

    array[5] = NULL;
   
   return array;
}

int main() {

    char * string = "ls -l -a";

    parse_args(string);

    return 0;
}