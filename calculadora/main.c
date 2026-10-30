#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int soma (){
    float num1 = 0, num2 = 0;
    char sair = 's';
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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear"); 
    #endif
    if (sair == 'n' || sair == 'N'){
        return 1;    
    }
    else{
        return 0;
    }
}

int subtracao(){
    float num1 = 0, num2 = 0;
    char sair = 's';
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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear"); 
    #endif
    if (sair == 'n' || sair == 'N'){
        return 1;    
    }
    else{
        return 0;
    }
}

int mult(){
    float num1 = 0, num2 = 0;
    char sair = 's';
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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear"); 
    #endif
    if (sair == 'n' || sair == 'N'){
        return 1;    
    }
    else{
        return 0;
    }
}

int divisao(){
    float num1 = 0, num2 = 0;
    char sair = 's';
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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear"); 
    #endif
    if (sair == 'n' || sair == 'N'){
        return 1;    
    }
    else{
        return 0;
    }
}

void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opc = 0;
    float num1 = 0, num2 = 0;
    char sair = 's';
    do{
        if(opc > 5 || opc < 1){
            printf("===============================\n\tCalculadora Simples\n===============================\n");
            printf("Selecione uma operação:\n");
            printf("1. Adição\n");
            printf("2. Subtração\n");
            printf("3. Multiplicação\n");
            printf("4. Divisão\n");
            printf("5. Sair\n");
            printf("Opção: ");
            scanf("%d", &opc);
        }

        switch (opc){
            case 1:
                opc = 0;
                limparBuffer();
                if (soma() == 1){
                    opc = 5;
                }
            break;
            case 2:
                opc = 0;
                limparBuffer();
                if (subtracao() == 1){
                    opc = 5;
                }
            break;
            case 3:
                opc = 0;
                limparBuffer();
                if (mult() == 1){
                    opc = 5;
                }
            break;
            case 4:
                opc = 0;
                limparBuffer();
                if (divisao() == 1){
                    opc = 5;
                }
            break;
            case 5:
            break;
            default:
                do{
                    printf("Erro: Opção Inválida\n");
                    while (getchar() != '\n');
                    printf("Digite uma opção válida novamente: ");
                    scanf("%d", &opc);
                }while (opc > 5 || opc < 1);
            break;
        }
    } while (sair != 'N' && sair != 'n' && opc != 5);

    return 0;
}