#include <stdio.h>


int main(void){
    int adults = 1,children = 1,staylength,choice;
    float roomtotal = 0,mealtotal = 0,totalcost = 0;
    char type,paper;

    scanf("%c",&paper);
    if (type == 'F' || type == 'f') {
        mealtotal += 20;
    }
    else if (type == 'H' || type == 'h') {
        mealtotal += 20;
    }
    else if (type == 'F' || type == 'f') {
        mealtotal += 5;
    }
    else
    {
        printf("%c was not valid",type);
    }
    if
    mealtotal = mealtotal*(children/2)*adults;
    switch (toupper(type)) {
        case 'F':
            mealtotal += 20;
        break;
        case 'H':
            mealtotal += 15;
            break;
        case 'B':
            mealtotal += 5;
        break;
        default:
            printf("%c was not a valid paper option\n", toupper(type));
        break;
        mealtotal = mealtotal*(children/2)*adults;
    }
    
    printf("%d",mealtotal);
    printf("%d",totalcost);
    return 0;
}