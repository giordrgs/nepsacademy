#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int ope;
    float num1, num2;
    char sair;
    do{
        if (ope < 1 || ope > 5){
            printf("===============================\n\tCalculadora Simples\n===============================\n");
            printf("Selecione uma operação:\n");
            printf("1. Adição\n");
            printf("2. Subtração\n");
            printf("3. Multiplicação\n");
            printf("4. Divisão\n");
            printf("5. Sair\n");
            printf("Opção: ");
            scanf("%d", &ope);
        }

        if (ope >= 1 && ope <= 5){
            switch (ope)
            {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                printf("Resultado: %f + %f = %f\n", num1, num2, num1 + num2);
                do {
                    printf("Deseja realizar outra operação? (s/n): ");
                    scanf(" %c", &sair);
                    if (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N'){
                        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                    }
                } while (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N');
                ope = 0;
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear"); 
                #endif

                break;
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                printf("Resultado: %f - %f = %f\n", num1, num2, num1 - num2);
                do {
                    printf("Deseja realizar outra operação? (s/n): ");
                    scanf(" %c", &sair);
                    if (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N'){
                        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                    }
                } while (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N');
                ope = 0;
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear"); 
                #endif
                break;
            case 3:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                printf("Resultado: %f x %f = %f\n", num1, num2, num1 * num2);
                do {
                    printf("Deseja realizar outra operação? (s/n): ");
                    scanf(" %c", &sair);
                    if (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N'){
                        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                    }
                } while (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N');
                ope = 0;
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear"); 
                #endif
                break;
            case 4:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                if (num2 == 0){
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                else{
                    printf("Resultado: %f / %f = %f\n", num1, num2, num1 / num2);
                }
                do {
                    printf("Deseja realizar outra operação? (s/n): ");
                    scanf(" %c", &sair);
                    if (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N'){
                        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                    }
                } while (sair != 's' && sair != 'n' && sair != 'S' && sair != 'N');
                ope = 0;
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear"); 
                #endif
                break;
            case 5:
                break;
            }
        }
        else{
            do{
                printf("Erro: Opção Inválida\n");
                printf("Digite uma opção válida novamente: ");
                scanf("%d", &ope);
            }while (ope > 5 || ope < 1);
        }
    }while(ope != 5 && sair != 'n' && sair != 'N');
    #ifdef _WIN32
        system("cls");
    #else
        system("clear"); 
    #endif

    printf("Obrigado por usar a calculadora! Até a próxima.");
    printf("\n\nAperte qualquer tecla para sair");
    scanf("%d");

    return 0;
}