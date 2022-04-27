/*
Escreva um programa que leia um número inteiro e apresente a metade deste número.
*/
#include <stdio.h>
int main (){
    int numero;
    scanf("%i",&numero);
    float numeroMetade = (float) numero / 2;
    printf("%.2f\n",numeroMetade);
    return 0;
}