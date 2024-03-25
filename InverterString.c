#include<stdio.h>
#include<string.h>

int main(void){
    char palavra[200];
    int i, tamanho;

    printf("Digite uma palavra: ");
    fgets(palavra,200,stdin);

    tamanho = strlen(palavra);
    printf("A string invertida: ");
    for(i=tamanho; i>0; i--){
        printf("%c",palavra[i]);
    }

    FILE *arquivo;
    arquivo = fopen("palavrainvertida.txt,", "w");
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

   for(i = tamanho - 1; i >= 0; i--) {
        fprintf(arquivo, "%c", palavra[i]);
    }

    fclose(arquivo);

    printf("\nPalavra invertida foi armazenada no arquivo 'palavrainvertida.txt'.\n");

    return 0;
}