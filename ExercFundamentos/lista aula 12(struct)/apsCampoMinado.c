#include <stdio.h> // printf …
#include <windows.h> // COORD e system("CLS")
#include <time.h>
#define SIZE 11 // Tamanho da Matriz
#define KEY_W 119 // Tecla W
#define KEY_A 97 // Tecla A
#define KEY_S 115 // Tecla S
#define KEY_D 100 // Tecla D
#define KEY_ESCAPE 27 // Tecla ESC
#define KEY_ENTER 10 // Tecla ENTER
#define clear system("CLS") // Limpa a tela
void printm(int m[SIZE][SIZE]); // Função P/ imprimir matriz
int gotoxy(int x, int y); // Função para mover o cursor
//preenche_cm(cm[11][11]);
void main()
{
    int x = 1, y = 1, i, j, k, z, bomb = 0, nivel = 8; // Coordenadas
    int m[SIZE][SIZE] = { 0 }; // matriz para criar campo minado
    int tecla = 0; // Tecla que recebe os comandos
    srand(time(NULL));
    while(bomb <= nivel)
    {
        i = rand()%9+1;
        j = rand()%9+1;
        m[i][j] = 9;
        bomb++;
    }
    for(i = 1; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
        {
            if(m[i][j]==9)
            {
                for(z = i - 1; z <= (i + 1); z++)
                {
                    for(k = j - 1; k <= (j + 1); k++)
                    {
                        if(m[z][k] == 9){
                        }
                        else{
                            m[z][k] = m[z][k] + 1;
                        }
                    }
                }
            }
        }
    }
    do   // Inicializa o laço que dura enquanto ESC não for pressionado
    {
        clear; // Limpa a tela
        printm(m); // Mostra a matriz do campo minado
        if(x >= 1 && x <= 9 && y >= 1 && y <= 9)
        {
            gotoxy(x, y);
            tecla = getch();
            if (tecla == KEY_W)
                y--; // move cursor para cima;
            if (tecla == KEY_A)
                x--; // move cursor para esquerda;
            if (tecla == KEY_S)
                y++; // move cursor para baixo;
            if (tecla == KEY_D)
                x++; // move cursor para direita;
        }
        else
        {
            if(x < 1)
                x += 1;
            if(x > 9)
                x -= 1;
            if(y > 9)
                y-=1;
            if(y < 1)
                y+=1;
        }
    }
    while (tecla != KEY_ESCAPE);   // Para quando ESC pressionado
    clear; // Limpa a tela
}
void printm(int m[SIZE][SIZE])
{
    int i = 0, j = 0;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d ", m[i][j]);
        }
        putchar('\n');
    }
}
int gotoxy(int x, int y)
{
    return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD)
    {
        x--, y--
    });
}// Necessita da windos.h
