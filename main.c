#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit, kelvin;
    int converttemp = 0;
    int starttemp = 0;


        printf("What temperature would you like to convert to? (fahrenheit= 1, celsius= 2, or kelvin= 3):\n");
    scanf("%d", &converttemp);
        printf("What temperature are you starting with? (fahrenheit= 1, celsius= 2, or kelvin= 3):\n");
    scanf("%d", &starttemp);

    if(starttemp == 1 && converttemp == 2)
    {
        printf("Please Enter the temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);
         celsius = (fahrenheit - 32) * 5 / 9;
    printf("\n %.2f fahrenheit = %.2f Celsius", fahrenheit, celsius);
    }



    if(starttemp == 1 && converttemp == 3)
    {
       printf("Please Enter the temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);
            kelvin = (fahrenheit + 459.67) * 5 / 9;
    printf("\n %.2f Fahrenheit = %.2f Kelvin", fahrenheit, kelvin);
    }

    if(starttemp == 2 && converttemp == 1)
    {
        printf("Please Enter the temperature in Celsius: \n");
    scanf("%f", &celsius);
            fahrenheit = celsius * 9 / 5 + 32;
        printf("\n %.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    }

    if(starttemp == 2 && converttemp == 3)
    {
        printf("Please Enter the temperature in Celsius: \n");
    scanf("%f", &celsius);
            kelvin = celsius + 273.5;
        printf("\n %.2f Celsius = %.2f Kelvin", celsius, kelvin);
    }

    if(starttemp == 3 && converttemp == 1)
    {
        printf("Please Enter the temperature in Kelvin: \n");
    scanf("%f", &kelvin);
            fahrenheit = kelvin * 9 / 5 - 459.67;
        printf("\n %.2f Kelvin = %.2f Fahrenheit", kelvin, fahrenheit);
    }

    if(starttemp == 3 && converttemp == 2)
    {
        printf("Please Enter the temperature in Kelvin: \n");
    scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
        printf("\n %.2f Kelvin = %.2f Celsius", kelvin, celsius);
    }

    if(starttemp == 1 && converttemp == 1)
    {
        printf("There is nothing to convert here...\n");
    }

    if(starttemp == 2 && converttemp == 2)
    {
        printf("There is nothing to convert here...\n");
    }

    if(starttemp == 3 && converttemp == 3)
    {
        printf("There is nothing to convert here...\n");
    }
    return 0;
}

