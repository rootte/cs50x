#include <stdio.h>

int main(void) {

    // Declare a variable to store the user's name
    char name[100];
    
    printf("Whats your name?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}