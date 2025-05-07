#include <stdio.h>

void menuJogo() {
    printf("\033[1;34m------ Menu do Jogo ------\033[0m\n");
    printf("\033[1;32m1. Iniciar Jogo \033[0m\n");
    printf("\033[1;35m2. Opcoes \033[0m \n");
    printf("\033[1;31m3. Sair \033[0m \n");
    printf("-------------------------\n");
}

void iniciarJogo() {
    printf("\033[1;32mJogo iniciado...\033[0m\n");
}

void instrucoesJogo() {
    int opcao;

    printf("\033[1;35m------ Instruções do Jogo ------\033[0m\n");
    printf("\n1. Escolha uma letra por vez.\n");
    printf("2. Caso saiba a palavra, digite-a e descubra o resultado.\n");
    printf("3. Complete as palavras antes que voce morra.\n");
    printf("-------------------------------\n");

    printf("\033[1;36mDigite 4 para voltar ao menu: \033[0m");
    
    while (scanf("%d", &opcao) != 1 || opcao != 4) {
        printf("\033[1;31mOpção inválida! Por favor,\n  Digite 4 para voltar ao menu: \033[0m\n");
    }
}


void sairJogo() {
    printf("\033[1;31mSaindo do jogo...\033[0m\n");
}

void opcaoMenu(int opcao) {
    switch (opcao) {
        case 1:
            iniciarJogo();
            break;
        case 2:
            instrucoesJogo();
            break;
        case 3:
            sairJogo();
            break;
        default:
            printf("\033[1;33mEntrada inválida. Por favor, insira um número entre 1 e 3.\033[0m\n");
    }
}

void executarMenu() {
    int opcao = 0;

    while (opcao != 3) {
        menuJogo();
        printf("Escolha uma opcao (1-3): \n");

        if (scanf("%d", &opcao) != 1) {
            printf("\033[1;33mEntrada inválida. Por favor, insira um número entre 1 e 3.\033[0m\n");
        } else {
            opcaoMenu(opcao);
        }
    }
}

int main() {
    executarMenu();
    return 0;
}
