#include <stdio.h>


int main() {
    // switch
    char grade;

    printf("\nEnter letter in grade:");
    scanf("%c", &grade);

    switch(grade)
    {
    case 'A':
        printf("perfect\n");
        break;
    case 'B':
        printf("good"); 
        break;
    case 'C':
        printf("okay"); 
        break;
    case 'D':
        printf("not so good"); 
        break;
    case 'E':
        printf("atleast not a F"); 
        break;
    case 'F':
        printf("Failed"); 
        break;
    default:
        printf("enter only Valid grades");
    }

    return 0;
}