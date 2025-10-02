#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; //panjang pohon
    scanf("%d", &n);
    int space = n-1; //panjang daun
    
    for (int i=0; i < space; i++){ //perulangan untuk * dan 'spasi'
        for (int j=0; j < space - i - 1; j++){ //perulangan spasi di daun
            printf(" ");
        }
        for (int j=0; j < ((2*i) + 1); j++){ //perulangan * di daun
            printf("*");
        }
        printf("\n"); //memisahkan tiap baris
    }
    for (int i=0; i < space - 1; i++){ //perulangan spasi di batang menggunakan panjang spasi daun
        printf(" ");
    }
    printf("*"); //batang
    return 0;
}