#include <stdio.h>

int main () {
    int lado;
    
    printf("valor do lado do quadrado: "); scanf("%d", &lado);
    
    for (int i =1; i <=lado; i ++) {
        for (int j =1; j <= lado; j ++) {
            if (i ==1 || j ==1 || i == lado || j == lado) {
                printf("*");
                printf(" ");
            }
            else printf("  ");
        }
        printf("\n");
    }

return 0; }
