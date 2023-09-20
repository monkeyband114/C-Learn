#include <stdio.h>
#include <ctype.h>

// lets go!!!
// calculator 0of some sort 
// celsius to Fahrenheit (x* 1.8) + 32
//  fahrenheit to celsius c = 5/9(f -32)

float toCalculate(char tempchar, float temp) {
   if ( tempchar ==  'c') {
  	float fahr = (temp * 1.8) + 32;
    printf("The value in Fahreheitis: %f", fahr);
  
  } else {
  	float cel = 0.6 * (temp - 32);
    printf("the value in celsius is: %f", cel);
  }
}

int main(){
  char tempchar;
	float temp;
  
  printf("Enter value of temprature 'C' or 'F' : ");
  scanf("%f %c", &temp, &tempchar);
  
  tolower(tempchar);
  toCalculate(tempchar, temp);

  return 0;
} 




