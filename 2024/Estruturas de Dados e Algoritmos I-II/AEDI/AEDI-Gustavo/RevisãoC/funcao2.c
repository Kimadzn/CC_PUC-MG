#include <stdio.h>
#include <stdlib.h>

float calcularAreaQuadrado(float x, float y)
{
    float area = x  * y; 
    return area;
}

int main (void)
{
        
    float area = calcularAreaQuadrado(10.0, 20.0);

    printf("A area e %f", area);

    return 0;
}

 