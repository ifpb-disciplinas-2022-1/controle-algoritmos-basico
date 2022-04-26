#include <stdio.h>
int main(){
    char nome[50]; //texto
    puts("Digite seu nome com até 50 caracteres:"); 
    gets(nome);
    printf("Seu nome: %s, seja bem vindo! \n",nome);
    return 0;
}