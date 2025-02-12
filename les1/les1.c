#include <stdio.h>

int main(){
    int a;
    printf("Enter your weight");
    scanf("%d", &a);
    if (a > 60 && a < 90){
        printf("You are Well!"); 
    }
    else {
        printf("You are bad");
    }
}