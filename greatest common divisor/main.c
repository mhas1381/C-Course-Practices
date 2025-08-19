/**
 * Author:    Mohammad Husein Asnavandi
 * Created:   08.18.2025 1404.05.27
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int gcd(int a , int b);
int main()
{

    int result = gcd(10 , 5);
    printf("%d\n" , 10 % 5);

    printf("gcd is %d\n" , result);
    return 0;
}

int gcd(int a , int b){

    int temp;

    while(b != 0){
        int temp = b;
        b = a % b ;
        a = temp;
    }
    return a;

    }
