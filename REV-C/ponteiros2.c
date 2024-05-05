#include <stdio.h>
#include <stdlib.h>

int main (void){
    int x = 10;
    double y = 20.50;
    char z = 'a';

  //  int *pX; // O valor onde o ponteiro ta apontando por causa do *
  //  pX = &x; //Endereço do ponteriro apontando pro endereço de X

    int *pX = &x;
    double *pY = &y;
    char *pZ =  &z;

    double soma = *pX + *pY; // Acessou valores do ponteiros
    //double soma2 = pX + pY; // Erro tentar somar endereço de memoria
    // printf("Soma2 = %f \n", soma2);

    int *resultado; // Criação do ponteiro resutlado
    resultado = 6422272; //Valor do endereço de memoria de X manualmente

    printf("Endereco x = %i ---- valor X = %i\n", pX, *pX);
    printf("Endereco Y = %i ---- valor Y = %f\n", pY, *pY);
    printf("Endereco Z = %i ---- valor Z = %c\n", pZ, *pZ);
    printf("Soma = %f \n", soma);
    printf("resultado %d \n", *resultado);//Apontamos manualmente pro endereço de X e pedimos pelo ponteiro
    //O valor o qual ele aponta


}