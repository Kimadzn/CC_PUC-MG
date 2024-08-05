#include <stdio.h>
#include <stdlib.h>

int gVariavelGlobal = 2;

int main (void){
    
    
    void teste(void);  
    printf ("Global = %i\n", gVariavelGlobal);
    teste();
    //teste();
    return 0;
}



void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *=2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2 ;

    gVariavelGlobal *= 2;

    printf ("Local Automatica = %i\n", variavelLocalAutomatica);
    printf ("Local Estatica = %i\n", variavelLocalEstatica);
    printf ("Global = %i\n", gVariavelGlobal);
}