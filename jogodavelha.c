#include <stdio.h>
#include <stdbool.h>

// Tamanho do tabuleiro
#define SIZE 3

// Caracteres usados para desenhar o tabuleiro
#define EMPTY_CELL ' '
#define X_CELL 'X'
#define O_CELL 'O'

// Matriz que representa o tabuleiro
char board[SIZE][SIZE];

// Função para inicializar o tabuleiro
void initializeBoard() {
  // Preenche todas as células com o caractere EMPTY_CELL
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      board[i][j] = EMPTY_CELL;
    }
  }
}

// Função para desenhar o tabuleiro
void drawBoard() {
  printf("\n");
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf(" %c |", board[i][j]);
    }
    printf("\n-----------\n");
  }
}

// Função para ler a jogada de um jogador
void getMove(char player) {
  int row, col;
  printf("\n%c, escolha sua jogada (linha coluna): ", player);
  scanf("%d%d", &row, &col);

  // Verifica se a jogada é válida
  if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == EMPTY_CELL) {
    board[row][col] = player;
  } else {
    printf("\nJogada inválida! Tente novamente.\n");
    getMove(player);
  }
}

// Função para verificar se há um vencedor
bool checkWin(char player) {
  // Verifica as linhas
  for (int i = 0; i < SIZE; i++) {
    if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
      return true;
    }
  }

  // Verifica as colunas
  for (int i = 0; i < SIZE; i++) {
    if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
      return true;
    }
  }

  // Verifica as diagonais
  if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
    return true;
  }
  if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
    return true;
  }

  return false;
}

// Função para verificar se o tabuleiro está cheio
bool isBoardFull() {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (board[i][j] == EMPTY_CELL) {
        return false;
      }
    }
  }
  return true;
}

// Função principal

int main() {
  initializeBoard();
  drawBoard();

  while (true) {
    getMove(X_CELL);
    drawBoard();
    if (checkWin(X_CELL)) {
      printf("\nX venceu!\n");
      break;
    }
    if (isBoardFull()) {
      printf("\nEmpate!\n");
      break;
    }

    getMove(O_CELL);
    drawBoard();
    if (checkWin(O_CELL)) {
      printf("\nO venceu!\n");
      break;
    }
    if (isBoardFull()) {
      printf("\nEmpate!\n");
      break;
    }
  }

  return 0;
}

