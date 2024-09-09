#include <stdio.h>


void celsiusToFahrenheit(double celsius);
void celsiusToKelvin(double celsius);
void fahrenheitToCelsius(double fahrenheit);
void fahrenheitToKelvin(double fahrenheit);
void kelvinToCelsius(double kelvin);
void kelvinToFahrenheit(double kelvin);

int main() {
    int choice;
    double temperature;

    
    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    
    printf("Enter the temperature: ");
    scanf("%lf", &temperature);

    
    switch (choice) {
        case 1:
            celsiusToFahrenheit(temperature);
            break;
        case 2:
            celsiusToKelvin(temperature);
            break;
        case 3:
            fahrenheitToCelsius(temperature);
            break;
        case 4:
            fahrenheitToKelvin(temperature);
            break;
        case 5:
            kelvinToCelsius(temperature);
            break;
        case 6:
            kelvinToFahrenheit(temperature);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}


void celsiusToFahrenheit(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}


void celsiusToKelvin(double celsius) {
    double kelvin = celsius + 273.15;
    printf("Temperature in Kelvin: %.2f\n", kelvin);
}


void fahrenheitToCelsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celsius: %.2f\n", celsius);
}

void fahrenheitToKelvin(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5/9;
    double kelvin = celsius + 273.15;
    printf("Temperature in Kelvin: %.2f\n", kelvin);
}

void kelvinToCelsius(double kelvin) {
    double celsius = kelvin - 273.15;
    printf("Temperature in Celsius: %.2f\n", celsius);
}

void kelvinToFahrenheit(double kelvin) {
    double celsius = kelvin - 273.15;
    double fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}
