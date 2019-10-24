#include <cs50.h>
#include <stdio.h>
int main(void)

{
int altura;

    //Perguntar a altura enquanto a resposta for menor que 0 e maior que 5
do
    {
        printf("Qual a altura?\n");
        altura = get_int("");
    }
while (altura < 1 || altura > 5);
printf("Altura = %d\n", altura);
for (int linhas = altura; linhas > 0; linhas--)
    {
     for (int hashes = altura; hashes > 0; hashes--) printf("# ");
     printf("\n");
    }
}
