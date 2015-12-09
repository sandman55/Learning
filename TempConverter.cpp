#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define LOWERLIMIT 0
#define UPPERLIMIT 50000

float convertCelctoF(float celcius);

int main(int argc, char *argv[])
{
    int lowerLimit = -1, upperLimit = -1, step = 0;
    
    while( !(lowerLimit > LOWERLIMIT) ){
           printf("Please give in a lower limit, limit >= %d: \n", LOWERLIMIT);
           scanf("%d", &lowerLimit);       
    }
    
    while(!((upperLimit < UPPERLIMIT) && (upperLimit > lowerLimit))){
           printf("Please give in a higher limit, %d > limit <= %d: \n", lowerLimit, UPPERLIMIT);
           scanf("%d", &upperLimit);
    }
    
    int tempDiff = upperLimit - lowerLimit;
    
    while((step > tempDiff) || (step <= 0)){
           printf("Please give in a step, 0 < step <= %d: \n", tempDiff);
           scanf("%d", &step);       
    }
    
    printf("Celsius\tFahrenheit\n");
    printf("-------\t----------\n");
    
    float celcius = lowerLimit;
    float fahrenheit = 0.0;
    
    while( celcius <= upperLimit ){
           
        fahrenheit = convertCelctoF(celcius);
        printf("%f\t%f\n", celcius, fahrenheit);   
        celcius =  celcius + step;   
    }
    
    system("PAUSE");
}

float convertCelctoF(float celcius){
      
      float fahrenheit;
      
      fahrenheit = (celcius*1.8) + 32;
      
      return fahrenheit;
}
