#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int adults,children,staylength,choice;
    float roomtotal = 0,mealtotal = 0,totalcost = 0;
    char type,paper;
    printf("");
    fflush(stdin);
    scanf("%c",&type);
    switch(toupper(type)) {
        case 'F':
            mealtotal+=20;
        break;
        case 'H':
            mealtotal+=15;
        break;
        case 'B':
            mealtotal+=5;
        break;
        default:
            printf("%c is not valid",toupper(type));
        break;
    }
    mealtotal = mealtotal(children/2*adults);
    switch(toupper(paper)) {
        case 'Y':
            totalcost+=5.5;
        break;
        case 'N':
            totalcost = totalcost;
        break;
        default:
            printf("%c is not valid",toupper(paper));
        break;
    }
    
    printf("%d",mealtotal);
    return 0;
}