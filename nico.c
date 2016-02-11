#include <stdlib.h>
#include <stdio.h>

struct drone {
    int id;
    int x,y;
    int maxWeight;
    int actualWeight;
    struct product* products;

}

void cmd_Load(struct drone* drone, struct warehouse* warehouse, int idProductType, int numberItems)
{
        
}

void cmd_Unload(struct drone* drone, struct warehouse* warehouse, int idProductType, int numberItems)
{
    
}
void cmd_Deliver(int id, int idCustomer, int idProductType, int numberItems)
{

}

void cmd_Wait(int id, 
