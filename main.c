#include <stdio.h>

void menuJogo() {
    printf("------ Menu do Jogo ------\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Opcoes\n");
    printf("3. Sair\n");
    printf("-------------------------\n");
}

void iniciarJogo() {
    printf("Jogo iniciado...\n");
}

void instrucoesJogo() {
    int opcao;

    printf("------ Instrucoes do Jogo ------\n");
    printf("\n1. Escolha uma letra por vez.\n");
    printf("2. Caso saiba a palavra, digite-a e descubra o resultado.\n");
    printf("3. Complete as palavras antes que voce morra.\n");
    printf("-------------------------------\n");

    printf("Digite 4 para voltar ao menu: ");
    
    while (scanf("%d", &opcao) != 1 || opcao != 4) {
        printf("Opção invalida! Por favor,\n  Digite 4 para voltar ao menu: \n");
    }
}


void sairJogo() {
    printf("Saindo do jogo...\n");
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
            printf("Opção invalida! Escolha uma opção valida (1-3).\n");
    }
}

void executarMenu() {
    int opcao = 0;

    while (opcao != 3) {
        menuJogo();
        printf("Escolha uma opcao (1-3): \n");

        if (scanf("%d", &opcao) != 1) {
            printf("Entradaa invalida. Por favor, insira um numero entre 1 e 3.\n");
        } else {
            opcaoMenu(opcao);
        }
    }
}

int main() {
    executarMenu();
    return 0;
}
