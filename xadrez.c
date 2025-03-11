/* 
Desafio Xadrex - Estácio de Sá
Disciplina - Introdução à Programação de Computadores
Aluno: Jairçon Freitas Sodré Pereira Júnior
Nível MESTRE
*/

#include <stdio.h>

// Função que controla os movimentos da torre em diferentes direções
void funcaoTorre(){
    int torre, torreDireita, torreEsquerda, torreCima, torreBaixo = 0; // Variáveis para capturar as direções e a distância
    int moverTorre; // Variável usada nos loops para controlar os movimentos

    int contador = 0; // Contador para identificar se é a primeira execução e gerenciar a mensagem de erro
    do{ 
        // Caso o usuário insira uma opção inválida, mostrar mensagem de erro
        if (contador > 0){
            printf("\nDigite uma Opção Válida!\n"); 
            printf("\n-----------------------------------\n");
        }
        
        // Perguntar ao usuário qual direção deseja mover a torre
        printf("\nQual lado Você quer mover a Torre: \n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Cima\n");
        printf("4. Baixo\n");
        scanf("%d", &torre);

        contador++; // Incrementar o contador para indicar que o loop já foi executado
    } while (torre < 1 || torre > 4); // Validar se a entrada está entre as opções válidas

    // Controle de fluxo baseado na escolha do usuário
    switch (torre)
    {
    case 1: // Movimento para a direita
        printf("Quantos casas você quer andar para Direita?\n");
        scanf("%d", &torreDireita);
        // Loop para simular o movimento e exibir cada passo
        for (moverTorre = 1; moverTorre <= torreDireita; moverTorre++) {
            printf("Torre Direita > %d", moverTorre);
            moverTorre == 1 ? printf(" passo\n") : printf(" passos\n"); // Singular/plural para "passos"
        }
        break;
    
    case 2: // Movimento para a esquerda
        printf("Quantos casas você quer andar para Esquerda?\n");
        scanf("%d", &torreEsquerda);
        for (moverTorre = 1; moverTorre <= torreEsquerda; moverTorre++) {
            printf("Torre Esquerda > %d", moverTorre);
            moverTorre == 1 ? printf(" passo\n") : printf(" passos\n");
        }
        break;

    case 3: // Movimento para cima
        printf("Quantos casas você quer andar para Cima?\n");
        scanf("%d", &torreCima);
        for (moverTorre = 1; moverTorre <= torreCima; moverTorre++) {
            printf("Torre Cima > %d", moverTorre);
            moverTorre == 1 ? printf(" passo\n") : printf(" passos\n");
        }
        break;

    case 4: // Movimento para baixo
        printf("Quantos casas você quer andar para Baixo?\n");
        scanf("%d", &torreBaixo);
        for (moverTorre = 1; moverTorre <= torreBaixo; moverTorre++) {
            printf("Torre Baixo > %d", moverTorre);
            moverTorre == 1 ? printf(" passo\n") : printf(" passos\n");
        }
        break;
    }
}

// Função que controla os movimentos do bispo nas diagonais do tabuleiro
void funcaoBispo(){
    int bispoDireitaCima, bispoEsquerdaCima, bispoDireitaBaixo, bispoEsquerdaBaixo = 0; // Variáveis para capturar movimentos em cada direção diagonal
    int moverBispo, bispo = 0; // 'moverBispo' controla passos, 'bispo' armazena a escolha do usuário

    int contador = 0; // Contador para verificar se a mensagem de erro deve aparecer
    do {
        // Mostrar mensagem de erro para opções inválidas
        if (contador > 0){
            printf("\nDigite uma Opção Válida!\n");
            printf("\n-----------------------------------\n");
        }

        // Perguntar ao usuário qual diagonal deseja mover o bispo
        printf("\nQual diagonal Você quer mover o Bispo: \n");
        printf("1. Diagonal Direita/Cima\n");
        printf("2. Diagonal Esquerda/Cima\n");
        printf("3. Diagonal Direita/Baixo\n");
        printf("4. Diagonal Esquerda/Baixo\n");
        scanf("%d", &bispo);
        contador++;
    } while (bispo < 1 || bispo > 4); // Validar entrada entre opções possíveis

    // Controle de fluxo baseado na escolha do usuário
    switch (bispo)
    {
    case 1: // Movimento Diagonal Direita/Cima
        printf("Quantos casas você quer andar para Diagonal Direita/Cima: ");
        scanf("%d", &bispoDireitaCima);
        moverBispo = 0;
        // Loop enquanto o bispo se movimenta casa por casa
        while (moverBispo < bispoDireitaCima){
            moverBispo++;
            printf("Bispo Diagonal Direita/Cima > %d", moverBispo);
            moverBispo == 1 ? printf(" passo\n") : printf(" passos\n"); // Singular/plural para "passos"
        }          
        break;

    case 2: // Movimento Diagonal Esquerda/Cima
        printf("Quantos casas você quer andar para Diagonal Esquerda/Cima: ");
        scanf("%d", &bispoEsquerdaCima);
        moverBispo = 0;
        while (moverBispo < bispoEsquerdaCima){
            moverBispo++;
            printf("Bispo Diagonal Esquerda/Cima > %d", moverBispo);
            moverBispo == 1 ? printf(" passo\n") : printf(" passos\n");
        }
        break;

    case 3: // Movimento Diagonal Direita/Baixo
        printf("Quantos casas você quer andar para Diagonal Direita/Baixo: ");
        scanf("%d", &bispoDireitaBaixo);
        moverBispo = 0;
        while (moverBispo < bispoDireitaBaixo){
            moverBispo++;
            printf("Bispo Diagonal Direita/Baixo > %d", moverBispo);
            moverBispo == 1 ? printf(" passo\n") : printf(" passos\n");
        }
        break;

    case 4: // Movimento Diagonal Esquerda/Baixo
        printf("Quantos casas você quer andar para Diagonal Esquerda/Baixo: ");
        scanf("%d", &bispoEsquerdaBaixo);
        moverBispo = 0;
        while (moverBispo < bispoEsquerdaBaixo){
            moverBispo++;
            printf("Bispo Diagonal Esquerda/Baixo > %d", moverBispo);
            moverBispo == 1 ? printf(" passo\n") : printf(" passos\n");
        }
        break;
    }
}

// Função que controla os movimentos da Rainha
void funcaoRainha(){

    // Variáveis para armazenar o número de casas que a rainha será movida em cada direção
    int rainhaDireita, rainhaEsquerda, rainhaCima, rainhaBaixo;
    int rainhaDireitaCima, rainhaEsquerdaCima, rainhaDireitaBaixo, rainhaEsquerdaBaixo = 0;

    // 'rainha' armazena a escolha da direção, 'moverRainha' controla os passos, 'contador' gerencia as mensagens de erro
    int rainha, moverRainha, contador = 0;

    contador = 0;
        
    do {
        // Mostrar mensagem de erro se a entrada for inválida
        if (contador > 0){
            printf("\nDigite uma Opção Válida!\n");
            printf("\n-----------------------------------\n");
        }

        // Perguntar ao usuário para onde deseja mover a rainha
        printf("\nPara onde você quer mover a Rainha: \n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Cima\n");
        printf("4. Baixo\n");
        printf("5. Diagonal Direita/Cima\n");
        printf("6. Diagonal Esquerda/Cima\n");
        printf("7. Diagonal Direita/Baixo\n");
        printf("8. Diagonal Esquerda/Baixo\n");
        scanf("%d", &rainha);

        contador++;
                    
    } while (rainha < 1 || rainha > 8); // Validar se a entrada está dentro do intervalo permitido
                
    // Controle de fluxo baseado na escolha do usuário
    switch (rainha)
    {
    case 1: // Movimento para a Direita
        moverRainha = 0;
        printf("Quantas casas você quer andar para Direita: \n");
        scanf("%d", &rainhaDireita);
            
        // Simular o movimento da Rainha para Direita
        do {
            moverRainha++;
            printf("Rainha Direita > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n"); // Gerenciar singular/plural
        } while (moverRainha < rainhaDireita);

        break;
        
    case 2: // Movimento para a Esquerda
        moverRainha = 0;
        printf("Quantas casas você quer andar para Esquerda: \n");
        scanf("%d", &rainhaEsquerda);
                
        do {
            moverRainha++;
            printf("Rainha Esquerda > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n");    
        } while (moverRainha < rainhaEsquerda);
    
        break;

    case 3: // Movimento para Cima
        moverRainha = 0;
        printf("Quantas casas você quer andar para Cima: \n");
        scanf("%d", &rainhaCima);
                
        do {
            moverRainha++;
            printf("Rainha Cima > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n");        
        } while (moverRainha < rainhaCima);
    
        break;
        
    case 4: // Movimento para Baixo
        moverRainha = 0;
        printf("Quantas casas você quer andar para Baixo: \n");
        scanf("%d", &rainhaBaixo);
                
        do {
            moverRainha++;
            printf("Rainha Baixo > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n");
        } while (moverRainha < rainhaBaixo);
    
        break;
        
    case 5: // Movimento na Diagonal Direita/Cima
        moverRainha = 0;
        printf("Quantas casas você quer andar para Diagonal Direita/Cima: \n");
        scanf("%d", &rainhaDireitaCima);
                
        do {
            moverRainha++;
            printf("Rainha Direita/Cima > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n");    
        } while (moverRainha < rainhaDireitaCima);
    
        break;
        
    case 6: // Movimento na Diagonal Esquerda/Cima
        moverRainha = 0;
        printf("Quantas casas você quer andar para Diagonal Esquerda/Cima: \n");
        scanf("%d", &rainhaEsquerdaCima);
                
        do {
            moverRainha++;
            printf("Rainha Esquerda/Cima > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n");      
        } while (moverRainha < rainhaEsquerdaCima);
    
        break;

    case 7: // Movimento na Diagonal Direita/Baixo
        moverRainha = 0;
        printf("Quantas casas você quer andar para Diagonal Direita/Baixo: \n");
        scanf("%d", &rainhaDireitaBaixo);
                
        do {
            moverRainha++;
            printf("Rainha Direita/Baixo > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n");    
        } while (moverRainha < rainhaDireitaBaixo);
    
        break;
        
    case 8: // Movimento na Diagonal Esquerda/Baixo
        moverRainha = 0;
        printf("Quantas casas você quer andar para Diagonal Esquerda/Baixo: \n");
        scanf("%d", &rainhaEsquerdaBaixo);
                
        do {
            moverRainha++;
            printf("Rainha Esquerda/Baixo > %d", moverRainha);
            moverRainha == 1 ? printf(" passo\n") : printf(" passos\n");
        } while (moverRainha < rainhaEsquerdaBaixo);
    
        break;

    }
}

// Função que simula os movimentos do cavalo (em formato "L")
void funcaoCavalo(){

    // Variáveis para capturar o movimento do cavalo em cada direção (em "L")
    int cavaloDireita, cavaloEsquerda, cavaloCima, cavaloBaixo = 0;
    int moverCavalo, cavalo, contador = 0; // 'moverCavalo' controla os passos, 'cavalo' armazena a escolha do movimento

    do {
        // Exibe uma mensagem de erro caso o usuário insira uma opção inválida
        if (contador > 0) {
            printf("\nDigite uma Opção Válida!\n");
            printf("\n-----------------------------------\n");
        }
        
        // Pergunta ao usuário para onde deseja mover o cavalo
        printf("\nPara onde você quer mover o Cavalo (em L): \n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Cima\n");
        printf("4. Baixo\n");
        scanf("%d", &cavalo);

        contador++; // Incrementador para controle de erro
    } while (cavalo < 1 || cavalo > 4); // Validar entrada entre as opções possíveis

    // Estrutura de controle para executar os movimentos do cavalo com base na escolha do usuário
    switch (cavalo) {
    case 1: // Movimento para a Direita (em "L")
        cavaloDireita = 1; // Determinar movimento para a direita
        moverCavalo = 0;

        // Enquanto o cavalo não alcançar o limite do movimento
        while (moverCavalo < cavaloDireita) {
            for (int l = 1; l < 3; l++) { // Movimento em dois passos para o formato "L"
                printf("Cavalo Direita > %d", l);
                l == 1 ? printf(" passo\n") : printf(" passos\n"); // Singular/plural para "passos"
            }
            moverCavalo++;
            printf("Cavalo Baixo > %d", moverCavalo); // Movimento adicional no formato "L"
            moverCavalo == 1 ? printf(" passo\n") : printf(" passos\n");
            printf("\n");
        }
        break;

    case 2: // Movimento para a Esquerda (em "L")
        cavaloEsquerda = 1;
        moverCavalo = 0;

        while (moverCavalo < cavaloEsquerda) {
            for (int l = 1; l < 3; l++) {
                printf("Cavalo Esquerda > %d", l);
                l == 1 ? printf(" passo\n") : printf(" passos\n");
            }
            moverCavalo++;
            printf("Cavalo Baixo > %d", moverCavalo);
            moverCavalo == 1 ? printf(" passo\n") : printf(" passos\n");
            printf("\n");
        }
        break;

    case 3: // Movimento para Cima (em "L")
        cavaloCima = 1;
        moverCavalo = 0;

        while (moverCavalo < cavaloCima) {
            for (int l = 1; l < 3; l++) {
                printf("Cavalo Cima > %d", l);
                l == 1 ? printf(" passo\n") : printf(" passos\n");
            }
            moverCavalo++;
            printf("Cavalo Direita > %d", moverCavalo);
            moverCavalo == 1 ? printf(" passo\n") : printf(" passos\n");
            printf("\n");
        }
        break;
        
    case 4: // Movimento para Baixo (em "L")
        cavaloBaixo = 1;
        moverCavalo = 0;

        while (moverCavalo < cavaloBaixo) {
            for (int l = 1; l < 3; l++) {
                printf("Cavalo Baixo > %d", l);
                l == 1 ? printf(" passo\n") : printf(" passos\n");
            }
            moverCavalo++;
            printf("Cavalo Esquerda > %d", moverCavalo);
            moverCavalo == 1 ? printf(" passo\n") : printf(" passos\n");
            printf("\n");
        }
        break;
    }
}

int main(){
    
    int contador1 = 0;
    int tabuleiro = 0;
    do {
        if (contador1 > 0){
            printf("\nDigite uma Opção Válida!\n"); // Mensagem em caso de erro, ao usuário.
            printf("\n-----------------------------------\n");
        }
        printf("\nBem vindo ao Tabuleiro de Xadrez!\nEscolha qual peça você quer mover: \n");// Menu de seleção de peças
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        scanf("%d", &tabuleiro);
        contador1++;
        } while (tabuleiro < 1 || tabuleiro > 4);
    
    switch (tabuleiro) // Switch principal
    {
    case 1:
        funcaoTorre(); // Chamada de função
        break;
    
    case 2:
        funcaoBispo(); // Chamada de função
    
        break;

    case 3:
        funcaoRainha(); // Chamada de função
        
        break;
    
    case 4:
        funcaoCavalo(); // Chamada de função 
        break;
    
    }
    return 0;
}
