#include <stdio.h>  
#include <stdlib.h>
  
int main()  
{  
    float celsius, fahrenheit;  
  
    // Reads temperature in celsius from user  
    printf("Enter temperature in Celsius: ");  
    scanf("%f", &celsius);  
  
    // Converts temperature from celsius to fahrenheit   
    fahrenheit = ((celsius * 9)/5) + 32;  
  
    printf("\n%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);  
    
    system("pause");
    return 0;  
}  
