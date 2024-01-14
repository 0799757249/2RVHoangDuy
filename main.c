#include <stdio.h>
#include <stdlib.h>

int checkPrime(int number);
int main()
{
    int number;
    printf("\nInput number to check: ");
    scanf("%d", &number);
    int check = checkPrime(number);
    if(check){
        printf("\nValid!");
    }else{
        printf("\nInvalid!");
    }
    return 0;
}
int checkPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            return 0;
        }
    }return number >= 2;
}
