// CampoMinado.cpp
// Eduardo "TheDrummer" Silveira
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>


void preenche_pos (int mat[10][10])
{
   short l,c;

   for(l=0; l<10; l++)
      for(c=0; c<10; c++)
         mat[l][c] = 5;
}

short escolhe_posicao (short pos)
{
   do{
      printf ("Digite uma posicao para abrir(1 a 8): ");
      scanf ("%hd",&pos);
      fflush (stdin);
      if (pos < 0 || pos > 8)
         printf ("\nValor invalido!\n");
   }while(pos < 0 || pos > 8);

   return pos;
}
int conta_minas (int pos[10][10],int minas)
{
   int espacos=0;
   short l,c;

   for(l=1; l<9; l++)
      for(c=1; c<9; c++)
         if (pos[l][c] != 1)
            espacos++;
   return (espacos-minas);
}

void mostra (int mat[10][10],int pos[10][10])
{
   short l,c;

   printf ("\n    1 2 3 4 5 6 7 8");
   for(l=0; l<10; l++){
      if (l > 0 && l < 9)
         printf ("\n%hd ",l);
      else
         printf ("  \n");
      for(c=0; c<10; c++)
         printf((l == 0 && c == 0 || l == 9 && c == 0) ? "  + " : (l == 0 || l == 9 || c == 0 || c == 9) ? "+ " : (pos[l][c] == 0 || pos[l][c] == 1) ? "%d " : "? ",mat[l][c]);
   }
   printf ("\n");
}

void mostra_aberto (int mat[10][10])
{
   short l,c;

   printf ("\n    1 2 3 4 5 6 7 8");
   for(l=0; l<10; l++){
      if (l > 0 && l < 9)
         printf ("\n%hd ",l);
      else
         printf ("  \n");
      for(c=0; c<10; c++)
         printf((l == 0 && c == 0 || l == 9 && c == 0) ? "  + " : (l == 0 || l == 9 || c == 0 || c == 9) ? "+ " : (mat[l][c] == 9) ? "* " : "%d ",mat[l][c]);
   }
   printf ("\n");
}
void abre_vazios (int cm[10][10],int pos[10][10],short l, short c)
{
   short x,y;
   bool continua;

   do{
      for (x = l - 1; x <= l + 1; x++)
         for (y = c - 1; y <= c + 1; y++){
            continua = false;
            if (pos[x][y] != 1){
               continua = true;
               pos[x][y] = 1;
               if (cm[x][y] == 0)
                  abre_vazios(cm,pos,x,y);
            }
         }
   }while(continua);
}

void posicao (int cm[10][10], int minas)
{
   int pos[10][10],sem_minas=64-minas;
   short l=0,c=0;

   preenche_pos(pos);

   do{
      printf ("\nUse a posicao 0,0 para sair.\n");
      printf ("\nLinha: ");
      l = escolhe_posicao(l);
      printf ("\nColuna: ");
      c = escolhe_posicao(c);

      if (l == 0 && c == 0){
         exit(0);
      }
      else if (pos[l][c] == 1 || pos[l][c] == 0 && l != 0 && c != 0)
         printf ("\nEsta posicao ja esta aberta!\n");
      else if (cm[l][c] == 9){
         pos[l][c] = 0;
         printf ("\nVoce atingiu uma bomba!\n");
         mostra_aberto(cm);
         break;
      }
      else if (cm[l][c] == 0){
         pos[l][c] = 1;
         abre_vazios(cm,pos,l,c);
         mostra(cm,pos);
         sem_minas = conta_minas(pos,minas);
         printf ("\nRestam %d espacos sem bomba.\n",sem_minas);
      }
      else {
         pos[l][c] = 1;
         mostra(cm,pos);
         sem_minas = conta_minas(pos,minas);
         printf ("\nRestam %d espacos sem bomba.\n",sem_minas);
      }
   }while(sem_minas != 0);
   if (sem_minas == 0)
      printf ("\nParabens! Voce ganhou!\n");
}

void calcula (int mat[10][10])
{
   short l,c,x,y;

   for(l=0; l<10; l++)
      for(c=0; c<10; c++)
         if (mat[l][c] == 9)
            for (x = l - 1; x <= l + 1; x++)
               for (y = c - 1; y <= c + 1; y++)
                  if (mat[x][y] != 9)
                     mat[x][y] += 1;
}

void gerador (int mat[10][10],int minas)
{
   short l,c,cont=0;
   int gerado;
   srand(time(NULL));

   do{
      gerado = rand() % 8 + 1;
      l = gerado;
      gerado = rand() % 8 + 1;
      c = gerado;
      if (mat[l][c] != 9){
         mat[l][c] = 9;
         cont++;
      }
   }while (cont < minas);
}

void preenche (int mat[10][10])
{
   short l,c;

   for(l=0; l<10; l++)
      for(c=0; c<10; c++)
         mat[l][c] = ((l == 0 || l == 9 || c == 0 || c == 9) ? '+' : 0);
}

int main ()
{
   int cm[10][10],minas;
   short l,c;

   do{
      printf ("Digite a quantidade de minas (1 ate 60): ");
      scanf ("%d",&minas);
      fflush (stdin);
      if (minas < 1 || minas > 60)
         printf ("\nValor invalido!\n\n");
   }while(minas < 1 || minas > 60);

   preenche(cm);
   gerador(cm,minas);
   calcula(cm);
   posicao(cm,minas);

   getchar();
}
