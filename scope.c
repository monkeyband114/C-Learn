#include <stdio.h>

const int y = 5;
int main(int argc, char const *argv[])
{
    int x = 6;
    calculate();
    printf("%d", x);
    printf(y);
    calulateGt(x, y);
    return 0;
}

void calculate(){
    y = 25;
    // run a bloclk of code 
}

int calulateGt(int x, int y){
    return (x > y) ? x : y;
}