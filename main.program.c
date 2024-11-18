for(int i = 0; i < adults[count]; i++) {
    if(type[count] == 'F' || type[count] == 'f') {
        mealtotal[count] += 20;
    }
    else if(type[count] == 'H' || type[count] == 'h') {
        mealtotal[count] += 15;
    }
    else {
        mealtotal[count] += 5;
    }
}
for(int i = 0; i < children[count]; i++) {
    if(type[count] == 'F' || type[count] == 'f') {
        mealtotal[count] += 10;
    }
    else if(type[count] == 'H' || type[count] == 'h') {
        mealtotal[count] += 7.5;
    }
    else if(type[count] == 'B' || type[count] == 'b'){
        mealtotal[count] += 2.5;
    }
    else
    {
        printf("%c is not valid",type[count]);

    }
}
mealtotal[count] = mealtotal[count] * staylength[count];