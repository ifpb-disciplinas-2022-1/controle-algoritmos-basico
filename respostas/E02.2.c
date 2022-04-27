/*
Escreva um programa que receba do usuário três números e 
apresente como resultado a soma dos três números informados
*/
#include <stdio.h>
int main() {
    int x, y, z;
    printf("Escreva um numero: ");
    scanf("%i",&x);
    printf("Escreva o 2 numero: ");
    scanf("%i",&y);
    printf("Escreva o 3 numero: ");
    scanf("%i",&z);
    printf("%i", x+y+z);
    return 0;
}
// #include <stdio.h>
// int main() {
//     int x, y, z;
//     printf("Escreva três números: ");
//     scanf("%i %i %i",&x, &y, &z);
//     printf("%i\n", x+y+z);
//     printf("%i+%i+%i=%i\n",x, y, z, x+y+z);
//     return 0;
// }