#include <stdio.h>

int main()}{
    int X;
    int Y;
    int Z;
    printf("Unesi X, Y, Z");
    scanf("%d %d %d", &X, &Y, &Z);
    int M=X+Y;
    if(M>Z){
        int z=Z-Y;
        printf("Maksimalan broj mangi koji se mo�e natovariti u kamion je %d", z);
    }else{
        printf("Most mo�e podnijeti masu kamiona i mangi");
    }
}
