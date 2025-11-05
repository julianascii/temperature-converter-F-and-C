#include <stdio.h>

int main() {

    printf("Temperature Converter Program\n\n");
    int choice = 0;
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    
    printf("1.Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        // convert celsius to fahrenheit
        printf("\nEnter value to be converted: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * (9.0 / 5.0)) + 32;
        printf("\nYour converted temperature is %.1f F.\n", fahrenheit);

    } else if(choice == 2) {
        // convert fahrenheit to celsius
        printf("Enter value to be converted: ");
        scanf("%f", &fahrenheit);
        
        celsius = (fahrenheit - 32) * (5.0 / 9.0);
        printf("\nYour converted temperature is %.1f C.\n", celsius);
    } else {
        printf("\nYou might have entered the choice section in the incorrect format. Try again.\n");
    }


    return 0;
}