#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int ope, num1, num2;
    char sair;
   do{
        printf("===============================\n\tCalculadora Simples\n===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &ope);

        switch (ope)
        {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            printf("Resultado: %d + %d = %d\n", num1, num2, num1 + num2);
            do {
                printf("Deseja realizar outra operação? (s/n): ");
                scanf(" %c", &sair);
                if (sair != 's' && sair != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                }
            } while (sair != 's' && sair != 'n');
            #ifdef _WIN32
                system("cls");
            #else
                system("clear"); 
            #endif

            break;
        case 2:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            printf("Resultado: %d - %d = %d\n", num2, num1, num2 - num1);
            do {
                printf("Deseja realizar outra operação? (s/n): ");
                scanf(" %c", &sair);
                if (sair != 's' && sair != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                }
            } while (sair != 's' && sair != 'n');
            #ifdef _WIN32
                system("cls");
            #else
                system("clear"); 
            #endif
            break;
        case 3:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            printf("Resultado: %d x %d = %d\n", num1, num2, num1 * num2);
            do {
                printf("Deseja realizar outra operação? (s/n): ");
                scanf(" %c", &sair);
                if (sair != 's' && sair != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                }
            } while (sair != 's' && sair != 'n');
            #ifdef _WIN32
                system("cls");
            #else
                system("clear"); 
            #endif
            break;
        case 4:
            printf("Digite o primeiro número: ");
            scanf("%d", &num1);
            printf("Digite o segundo número: ");
            scanf("%d", &num2);
            if (num2 == 0){
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            else{
                printf("Resultado: %d / %d = %d\n", num1, num2, num1 / num2);
            }
            do {
                printf("Deseja realizar outra operação? (s/n): ");
                scanf(" %c", &sair);
                if (sair != 's' && sair != 'n'){
                    printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                }
            } while (sair != 's' && sair != 'n');
            #ifdef _WIN32
                system("cls");
            #else
                system("clear"); 
            #endif
            break;
        case 5:
            break;
        
        default:
            printf("Erro: Opção Inválida");
            Sleep(2000);
            #ifdef _WIN32
                system("cls");
            #else
                system("clear"); 
            #endif
            break;
        }


    } while (ope != 5 && sair != 'n');

    return 0;
}