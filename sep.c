#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args (char * line) {

    char * array[6];
    char * token = strsep(&line, " ");
    int i = 0;

    while(token != NULL) {

        array[i] = token;
        token = strsep(&line, " ");
        i++;
    }
    array[i] = NULL;
   
   return array;
}

int main() {

    char string[100] = "ls -a -l";

    char ** args = parse_args(string);

    int i = 0;

    for (i = 0; i < 2; i++) {
        printf("%s\n",args[i]);
    }

    execvp(args[0],args);

    return 0;
}