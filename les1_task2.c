#include <stdio.h>

int main() {
    int km;
    printf("Enter km to next station\n");
    scanf("%d", &km);
    if (km <= 500) {
        printf("You have enough fuel.");
    }
    else {
        printf("You have not enough fuel");
    }
}