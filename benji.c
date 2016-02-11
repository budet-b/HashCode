#include <stdlib.h>
#include <stdio.h>

char* file_name = NULL;
int row = 0;
int columns = 0;
int drones = 0;
int deadline = 0;
int maxload = 0;
int k = 0;
int product_types = 0;
int product_types_weights[];
int warehouses = 0;
int localisation_warehouses[][];
int product_types_store[][];
int orders = 0;
int main(int argc, char* argv[]){
    if(argc < 2){
        errx(2,"Fail to open input");
    }
    FILE *input = fopen(argv[2],"r+");
    char maxchar[10000];
    int i = 0;
    char *line = NULL;
    char *linewarehouses = NULL;
    size_t linecap = 0;
    ssize_t linelen;
    ssize_t warehousesline;
    while ((linelen = getline(&line, &linecap, input)) > 0){
        k = 0;
        maxchar[i] = linelen;
        if (i == 0) {
            row = maxchar[0];
            //free(maxchar[0]);
            columns = maxchar[1];
            drones = maxchar[2];
            deadline = maxchar[3];
            maxload = maxchar[4];
        }
        if (i == 1) {
            product_types = maxchar[0];
        }
        if (i == 2) {
            product_types_weights[product_types];
            for (int p = 0; p < product_types; p++) {
                product_types_weights[p] = maxchar[p];
            }
        }
        if (i == 3) {
            warehouses = maxchar[0];
        }
        
        i++;
        if (i > 3) {
        for (int x = 0; x < warehouses; x++) {
            for (int y = 0; y < warehouses; y++) {
                size_t mod = 0;
                if ((warehousesline = getline(&line, &mod, input))>0) {
                    product_types_store[x,y] = warehousesline[0],warehousesline[1];
                }
                if ((warehousesline = getline(&line, &mod+1, input)) > 0){
                localisation_warehouses[x,y] = warehousesline[0],warehousesline[1];
                    }
                }
            }
            orders = warehousesline[0];
        }
        
    }
}
