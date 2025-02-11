#include <stdio.h>

int main(int argc, char *argv[]){
    int a = atof(argv[1]);
    int b = atof(argv[2]);
    for (int i=0; i<b; i++)
    {
        b = b + b * b;
    }
    return b;
}