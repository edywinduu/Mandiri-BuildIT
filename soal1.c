#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int count = 0;
    float percentage;
    
    scanf("%d", &n); //jumlah bilangan
    
    int x[n];
    int days[n];
    
    for (int i=0; i < n; i++){ //nilai
        scanf("%d", &x[i]);
    }
    
    int maks = x[0];
    
    for (int i=0;i < n-1; i++){ //cari nilai terbesar
        if (x[i] >= maks){
            maks = x[i];
        }
    }
    
    for (int i = 0; i < n; i++){ //kalkulasi count dan days
        if (x[i] == maks){
            days[count] = i+1;
            count++;
        }
    }
    
    printf("Max : %d\n", maks); //output max
    printf("Count : %d\n", count); //output count
    printf("days :"); 
    for (int i=0; i < count; i++){ //ouput semua isi dari array days
        printf(" %d", days[i]); //output days
    }
    for (int i=0; i < n; i++){ //hitung sum(jumlah dari semua input)
        sum = sum + x[i];
    }
    
    percentage = ((float)(maks*count)/sum); //hitung persentasi
    printf("\nPercentage : %.3f%%", percentage * 100); //output persentasi
    return 0;
}
