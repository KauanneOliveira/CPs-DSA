#include<stdio.h>

int main()
{
int opcao;
    do {
system("cls");
ExibirMenu();
scanf("%d", &opcao);
} while (opcao != 0);
    printf("Obrigado por usar nosso ATM!");

void ExibirMenu{
    printf("--------------------\n");
    printf("   CAIXA ELETRÔNICO   \n";)
    printf("--------------------\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar depósito\n");
    printf("0 - Sair\n");
    printf("--------------------\n");
    printf('Escolha uma opção:');
    scanf("%d", &opcao);
    while getchar( != 'n');
        if (opcao < 0 || opcao > 3):
          printf("Opcao invalida!\n");

    switch (opcao) 
    {
    case 1:
        consultarSaldo(saldo);
        break;

    case 2:
        saldo = realizarSaque(saldo);
        break;
    
    case 3:
        realizarDeposito(float saldo);
        break;
    
    case 0:
        prinf("Saindo...\n");
        break;
        
    default:
        printf("Opcao Invalida!\n");
        break;
    }
    return 0;
}
