#include <stdio.h>

int main() {

    int edad;

    printf("Coloque su edad:");
    scanf("%d", &edad);
    if (edad >= 18) {
        printf("Eres mayor de edad\n");
    } else {
        printf("Eres menor de edad\n");
    }

    if(edad >= 18 && edad < 65) {
        printf("Eres un adulto\n");
    } else if (edad >= 65) {
        printf("Eres un adulto mayor\n");
   
    }
    return 0;
}