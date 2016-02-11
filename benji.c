#include <stdlib.h>
#include <stdio.h>

char* file_name = NULL;

void readinfo(){
    
}

int main(int argc, char* argv[]){
    if(argc < 2){
        errx(2,"Fail to open input");
    }
    File *input = fopen(argv[2],"r+");
    
}
