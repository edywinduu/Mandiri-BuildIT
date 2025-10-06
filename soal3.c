#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[1000];
    char kata[70][300];
    char *tiapkata;
    
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';
    
    tiapkata = strtok(kalimat, " ");
    int n=0;
    
    while (tiapkata != NULL ){
        strcpy(kata[n], tiapkata);
        tiapkata = strtok(NULL, " ");
        n++;
    }
    
    for (int i=0; i < n; i++){
        for (int j=i+1; j < n; j++){
            if (strcmp(kata[i], kata[j]) == 0){
                strcpy(kata[j], "");
            }
        }
    }
    
    for (int i=0; i < n; i++){
        if (strlen(kata[i]) > 0){
            printf("%s ", kata[i]);
        }
    }
    return 0;
}
