#include <stdio.h>

int main(void){

    int n;

    do{
        printf("Height of pyramid: \n");
        if(scanf("%d", &n) == 1){
        }
        else {
            printf("Invalid input. Please enter a valid integer.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            n = 0;
        }

    } while (n < 1 || n > 8);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l < i + 1; l++) {
            printf("#");
        }
        printf("\n");
    }


}