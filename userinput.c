#include <stdio.h>
#include <string.h>


int main()
{
    char name[25];
    int age;
    
    printf("\nwhats ur name");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    
    printf("\nhow old are you:");
    scanf("%d", &age);

    

    printf("you are %d years old", age);
    printf(" %s is you name", &name);
    
    // fgets(name, 25, stdin);

    return 0;
}


