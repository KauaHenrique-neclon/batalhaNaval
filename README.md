# Jogo de Batalha Naval

Um jogo de Batalha Naval em C que possui três níveis de complexidade: Novato, Aventureiro e Mestre. Este jogo permite aplicar habilidades especiais em um tabuleiro de barco e exibir os resultados de forma clara.

## Índice

- [Descrição do Projeto]
- [Níveis de Complexidade]
- [Funcionalidades]
- [Como Executar]
- [Estrutura do Código]
- [Licença]

## Descrição do Projeto

Este projeto é um jogo de Batalha Naval que utiliza um tabuleiro configurável. Os jogadores podem aplicar habilidades especiais que afetam o tabuleiro em formas específicas. O código é estruturado de maneira a ser fácil de entender e expandir.

## Níveis de Complexidade

1. **Novato**: Tabuleiro 5x5 com dois navios (a ser implementado).
2. **Aventureiro**: Tabuleiro 10x10, permitindo posicionamento diagonal de navios.
3. **Mestre**: Introduz habilidades representadas por matrizes, com três padrões definidos: cone, cruz e octaedro.

## Funcionalidades

- **Tabuleiro**: Um tabuleiro de 10x10 que pode ser inicializado e exibido.
- **Habilidades**: 
  - **Cone**: Cria uma área afetada em formato de cone.
  - **Cruz**: Cria uma área afetada em formato de cruz.
  - **Octaedro**: Cria uma área afetada em formato de octaedro.
- **Exibição**: Mostra o estado atual do tabuleiro.

## Como Executar

1. Certifique-se de ter o compilador GCC instalado.
2. Compile o código com o seguinte comando:

   ```bash
   gcc -o jogo_batalha_naval main.c
