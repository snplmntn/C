#include <stdio.h>
#include <ctype.h>

// temperature conversion in switch statements

int main(){

    printf("\nTemperature Conversion (C & F)\n\n");

        char unit;
        float temp;
        bool e = true;
        bool d = false;

        printf("What is your temperature, Celsius (C) or Fahrenheit (F)? : ");
        scanf("%c", &unit);
        unit = toupper(unit);

            switch(unit){
                case 'C':
                    printf("Enter the temperature (C): ");
                    scanf("%f", &temp);

                    temp = ((temp * 9) / 5) + 32;

                    printf("\nTemperature in F: %f", temp); 

                break;

                case 'F':
                    printf("Enter the temperature (F): ");
                    scanf("%f", &temp);

                    temp = ((temp - 32) * 5) / 9;

                    printf("\nTemperature in C: %f", temp);
                
                break;

                default:
                    printf("\n%c is not a valid input. Choose only 'F' or 'C'.", unit);
            }
          
    
    return 0;    
}