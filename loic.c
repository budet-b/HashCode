#include <stdlib.h>
#include <stdio.h>

struct product {
    int type;
    int amount;
    int weight;
};

struct warehouse {
    int x,y;
    struct product* products;
};

struct warehouse* gen_warehouse(int x, int y, int prod_types, int* prod_present, int* weights) {
    struct warehouse* warehouse = malloc(sizeof(struct warehouse));
    struct product* products= malloc(sizeof(struct product) * prod_types);
    for(size_t i = 0; i < prod_types; i++) {
        products[i].type = i;
        products[i].weight = weights[i];
        products[i].amount = prod_present[i];
    }
    warehouse->x = x;
    warehouse->y = y;
    warehouse->products = products;

    return warehouse;
}
int main(int argc, char* argv[]) {
    int** grid = malloc((int)argv[1]*(int)argv[2]*sizeof(int)); // TAKE X AND Y FROM INPUT
    
    return 0;
}
