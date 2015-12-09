#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define LOWERLIMIT 0
#define UPPERLIMIT 50000

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
    
    
    
    system("PAUSE");
}
