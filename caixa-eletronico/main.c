#include<stdio.h>
#include <stdlib.h>

// munu
void ExibirMenu() {
    printf("-------------------------\n");
    printf("   CAIXA ELETRONICO   \n");
    printf("-------------------------\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar deposito\n");
    printf("0 - Sair\n");
    printf("-------------------------\n");
}

// exibir saldo
void consultarSaldo(float saldo) {
    system("cls");
    printf("\n--- SALDO ATUAL ---\n");
    printf("Saldo: R$ %.2f\n", saldo);
    printf("-------------------\n");
}

// saque
float realizarSaque(float saldo) {
    float valor;
    printf("Valor do saque: ");
    scanf("%f", &valor);
    if(valor > 1000.00) {
        printf("Limite diario excedido!\n");
    } else if (valor > saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        saldo -= valor;
        printf("Saque realizado!\n");
    }

    return saldo;
}


//depósito
float realizarDeposito(float saldo) {
    float valor;
    printf("Digite o valor de deposito: ");
    scanf("%f", &valor);
    if (valor > 0) {
        saldo += valor;
        printf("Deposito realizado!\n");
    } else {
        printf("Valor invalido!\n");
    }
    
    return saldo;
}

// congelar tela 
void congelarTela() {
    printf("\nPressione Enter para continuar...");
    setbuf(stdin, NULL);
    getchar();
}


int main() {
    int opcao;
    float saldo = 500.0;

    do {
        system("cls");
        ExibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                consultarSaldo(saldo);
                congelarTela();
                break;

            case 2:
                saldo = realizarSaque(saldo);
                congelarTela();
                break;
            
            case 3:
                saldo = realizarDeposito(saldo);
                congelarTela();
                break;
            
            case 0:
                printf("Saindo...\n");
                break;
                
            default:
                printf("Opcao Invalida!\n");
                congelarTela();
                break;
        }
    } while (opcao != 0);

    printf("\tObrigado por usar nosso ATM!"); 
    return 0;
}
