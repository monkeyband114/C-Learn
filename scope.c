#include <stdio.h>
int y = 5;
int main(int argc, char const *argv[])
{
    int x;
    calculate();
    printf("%d", x);
    printf(y);
    return 0;
}

void calculate(){
    y = 25;
    // run a bloclk of code 
}

int calulateGt(int x, int y){
    return (x > y) ? x : y;
}