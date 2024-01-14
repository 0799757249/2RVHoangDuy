#include <stdio.h>
#include <stdlib.h>

int checkTime(int hh, int mm);
int main()
{
    int hh, mm, dauCach;
    printf("\nInput time (hh mm) to check: ");
    scanf("%d", &hh);
    scanf("%c", &dauCach);
    scanf("%d", &mm);
    int h = checkTime(hh, mm);
    if(h){
        printf("\nValid!");
    }else{
        printf("\nInvalid!");
    }
}
int checkTime(int hh, int mm){
    if(hh > 24 || hh < 0 || mm > 60 || mm < 0){
        return 0;
    }
    return 1;
}
