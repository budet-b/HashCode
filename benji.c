#include <stdlib.h>
#include <stdio.h>

char* file_name = NULL;
int row = 0;
int columns = 0;
int drones = 0;
int deadline = 0;
int maxload = 0;
int main(int argc, char* argv[]){
    if(argc < 2){
        errx(2,"Fail to open input");
    }
    FILE *input = fopen(argv[2],"r+");
    char maxchar[10000];
    int i = 0;
    if (fgets (maxchar , 10000 , input) != NULL ){
    }
    char *line = NULL;
    size_t linecap = 0;
    ssize_t linelen;
    while ((linelen = getline(&line, &linecap, input)) > 0){
        maxchar[i] = linelen;
        if (i == 0) {
            row = maxchar[0];
            columns = maxchar[1];
            drones = maxchar[2];
            deadline = maxchar[3];
            maxload = maxchar[4];
        }
        i++;
    }

}
