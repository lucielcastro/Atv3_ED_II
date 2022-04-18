#include <stdio.h>
#include <math.h> 
#include<conio.h>
typedef struct {
   int x;
   int y;
}ponto;
void le_ponto( ponto *p);
float dist( ponto p1, ponto p2);

int main()
{
    ponto p1, p2;
    le_ponto(&p1);
    le_ponto(&p2);
    printf("\n\nDistancia entre os pontos: %.2f\n", dist(p1, p2));
    printf("\nPressione qualquer tecla para finalizar! ");
    getch;
}
void le_ponto(ponto *p)
{
    int x, y;
    printf("\nDigite as coordenadas do ponto (x,y): ");
    scanf("%d%d", &x, &y);
    p->x = x;
    p->y = y;
}
float dist( ponto p1, ponto p2)
{
    float s1, s2;
    s1 = pow((p1.x-p2.x), 2);  
    s2 = pow((p1.y-p2.y), 2);
    return sqrt( s1 + s2);    
                        
}