#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float absolute_value(float number){
    if (number >= 0){

        return number;
    }
    else
        return -(number);

}



int main()
{

    printf("%f\n" , absolute_value(145.54));
    printf("%f\n" , absolute_value(-145.54));
    printf("%f\n" , absolute_value(145));
    return 0;
}
