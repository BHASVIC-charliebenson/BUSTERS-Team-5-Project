#include <stdio.h>


int main(void){
    int adults = 1,children = 1,staylength,choice;
    float roomtotal = 0,mealtotal = 0,totalcost = 0;
    char type,paper;
    printf("what is type");
    fflush(stdin);
    scanf("%c",&type);
    printf("what is paper");
    fflush(stdin);
    scanf("%c",&paper);
    if (type == 'F' || type == 'f') {
        mealtotal += 20;
    }
    else if (type == 'H' || type == 'h') {
        mealtotal += 20;
    }
    if (type == 'F' || type == 'f') {
        mealtotal += 5;
    }
        break;
        default:
            printf("%c is not a valid meal type\n", toupper(type));
        break;
    }
    mealtotal = mealtotal*(children/2)*adults;
    switch (toupper(paper)) {
        case 'Y':
            totalcost += 5.5;
        break;
        case 'N':
            break;
        default:
            printf("%c is not a valid paper option\n", toupper(paper));
        break;
    }
    
    printf("%d",mealtotal);
    printf("%d",totalcost);
    return 0;
}