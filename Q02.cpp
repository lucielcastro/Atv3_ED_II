#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string>

typedef struct
{
   char nome[81];
   char matricula[8];
   char turma;
   float p1;
   float p2;
   float p3;
} Aluno;

#define MAX 3
Aluno* turmas[MAX];

void inicializa (int n, Aluno** turmas)
{
  int i;
  for (i=0; i<n; i++)
  turmas[i] = NULL;
}
void preenche (int n, Aluno** turmas, int i)
{
     if (i<0 || i>=n) {
     printf("Indice fora do limite do vetor\n");
     exit(1);
     }
     
     if (turmas[i]==NULL)
     turmas[i] = (Aluno*)malloc(sizeof(Aluno));
     
     printf("Informe o nome: ");
     scanf("%s", &turmas[i]->nome);
     printf("Informe a matricula: ");
     scanf("%s", &turmas[i]->matricula);
     printf("Informe a turma: ");
     scanf("%s", &turmas[i]->turma);
     printf("Informe a primeira nota: ");
     scanf("%f", &turmas[i]->p1);
     printf("Informe a segunda nota: ");
     scanf("%f", &turmas[i]->p2);
     printf("Informe a terceira nota: ");
     scanf("%f", &turmas[i]->p3);
     
}

void imprime (int n, Aluno** turmas, int i)
{
    
     if (i<0 || i>=n) {
     printf("Indice fora do limite do vetor\n");
     exit(1);
     }
     
     if (turmas[i]!=NULL)
    { 
    printf("\n\nMatricula: %d\n", turmas[i]->matricula);
    printf("\n\nNome: %s\n", turmas[i]->nome);
    printf("\n\nTurma: %s\n", turmas[i]->turma);
  printf("\n\n");
    }
}     
     

void imprime_aprovados (int n, Aluno** turmas)
{

int i;
float media;
float p1,p2,p3;

media = (p1+p2+p3)/3;

for (i=0; i<n; i++)

{

if (media>6.0)
 {
 imprime(n,turmas,i);    
 }   
}
   
} 
main(){
       
       Aluno* turmas[10];
       preenche(10,turmas,0);
       preenche(10,turmas,1);
       preenche(10,turmas,1);
       imprime_aprovados(10,turmas);
       system("pause");
       return 0;
       
}