#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;//Cria um arquivo
    char *str;//Cria uma string de tamanho variavel
    int fSize;//Cria uma variavel para tamanho
    fp = fopen("arquivo-encriptado.txt", "r+");//abre um arquivo
    if(fp== NULL) { perror("File Error"); exit(EXIT_FAILURE); }//Me retorna se deu algum erro
    fseek(fp, 0, SEEK_END);//vai do 0 at? para ultima posi??o
    fSize = ftell(fp);//Tamanho do meu arquivo
    int tam = fSize + 1;//variavel para receber o tamanho +1 do "/0"
    str = malloc(tam*sizeof(str[0]));//aloca na memoria a string
    if(fp== NULL) { perror("File Error"); exit(EXIT_FAILURE); }//Me retorna se deu algum erro
    fseek(fp, 0, SEEK_SET);//Reseta meu arquivo e vai para o come?o
    fgets(str, tam, fp);//Recebe do meu arquivo o que est? no .txt
    int i = 0;//Variavel para percorrer o vetor
    while(str[i]!= '\0')//Enquanto meu conteudo da string naquela posi??o nao for "\0" ele executa
    {
        str[i] = str[i] - 3;//Formula para descriptograr o texto criptografado por cesar
        i++;
    }
    fseek(fp, 0, SEEK_SET);//Reseta meeu arquivo e vai para o come?o
    fputs(str, fp);//Sa?da de dados da tela para o arquivo
    fclose(fp);//Fecha o arquivo
    free(str);//Libera a memoria alocada para string
    if(rename("arquivo-encriptado.txt", "arquivo-encriptado-descriptado.txt")!=0){//Fun??o que vai renomear meu arquivo
        perror("File Error");//Se deu algum erro ele vai imprimir isso
    }else{
        puts("File successufully renamed");//Se n?o, ? pq deu tudo certo
    }
}
