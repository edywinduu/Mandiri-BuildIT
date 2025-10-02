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
    
    for (int i=0;i < n-1; i++){
        if (x[i] >= maks){
            maks = x[i];
        }
    }
    
    for (int i = 0; i < n; i++){
        if (x[i] == maks){
            days[count] = i+1;
            count++;
        }
    }
    
    printf("Max : %d\n", maks);
    printf("Count : %d\n", count);
    printf("days :");
    for (int i=0; i < count; i++){
        printf(" %d", days[i]);
    }
    for (int i=0; i < n; i++){
        sum = sum + x[i];
    }
    
    percentage = ((float)(maks*count)/sum);
    printf("\nPercentage : %.3f%%", percentage * 100);
    return 0;
}
