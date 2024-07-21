#include <stdio.h>

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    char opcao;
    int valor;
    do
    {
        printf("Escolha uma opcao:\nOpcao C - ordem crescente \nOpcao D - ordem decrescente \nOpcao S - sair\n");
        scanf("%c", &opcao);
        limparBuffer();
        if (opcao == 'C' || opcao == 'D')
        {

            printf("Digite um valor: ");
            scanf("%d", &valor);

            if (valor < 0)
            {
                printf("Valor Invalido\n");
                continue;
            }

            if (opcao == 'C')
            {
                if (valor % 2 == 0)
                {
                    int aux = valor - 3, aux2 = 0;
                    int vetor[aux];

                    for (int i = 3; i < valor; i++)
                    {
                        vetor[aux2] = i;
                        aux2++;
                    }

                    for (int i = 0; i < aux; i++)
                    {
                        printf("%d\n", vetor[i]);
                    }
                }
                else
                {
                    for (int i = 1; i < valor; i++)
                    {
                        printf("%d\n", i);
                    }
                }
            }
        }

        /*nao faz sentido fazer decrescente se nao pode ter valor negativo
        if (opcao == 'D') {
            if (valor % 2 == 0) {
                int aux = valor - 2 2, aux2 = 0;
                int vetor[aux];

                for (int i = 3; i < valor; i++) {
                    vetor[aux] = i;
                    aux2++;
                }

                for (int i = 0; i < aux; i++) {
                    printf("%d\n", vetor[i]);
                }
            }
            else {
                for (int i = 1; i < valor; i++) {
                    printf("%d\n", i);
                }
            }
        }*/
    } while (opcao != 'S');

    return 0;
}