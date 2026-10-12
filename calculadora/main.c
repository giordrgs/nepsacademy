#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int ope = 0, dig = 0;
    float num1 = 0, num2 = 0;
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
            dig = scanf("%d", &ope);
        }
        if(dig == 1){
            if (ope == 1 || ope == 2 || ope == 3 || ope == 4 || ope == 5){
                if (ope == 1.0){
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

                }
                else if (ope == 2){
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
                }

                else if (ope == 3){
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
                }

                else if (ope == 4){
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
                }

                else if (ope == 5){

                }

                else{
                    do{
                    printf("Erro: Opção Inválida\n");
                    while (getchar() != '\n');
                    printf("Digite uma opção válida novamente: ");
                    dig = scanf("%d", &ope);
                }while (ope > 5 || ope < 1);
                }
                
            }
            else{
                do{
                    printf("Erro: Opção Inválida\n");
                    while (getchar() != '\n');
                    printf("Digite uma opção válida novamente: ");
                    dig = scanf("%d", &ope);
                }while (ope > 5 || ope < 1);
            }
        }
        else{
            do{
                printf("Erro: Opção Inválida\n");
                while (getchar() != '\n');
                printf("Digite uma opção válida novamente: ");
                dig = scanf("%d", &ope);
            }while (ope > 5 || ope < 1);
        }
    }while(ope != 5 && sair != 'n' && sair != 'N');
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear"); 
    #endif

    printf("Obrigado por usar a calculadora! Até a próxima.");

    return 0;
}