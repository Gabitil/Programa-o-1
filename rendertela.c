#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
  // Inicializa a SDL
  SDL_Init(SDL_INIT_VIDEO);

  // Cria uma janela com título "Jogo da Velha"
  SDL_Window* window = SDL_CreateWindow("Jogo da Velha", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);

  // Cria um contexto de renderização na janela
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

  // Desenha um quadrado na tela
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // cor vermelha
  SDL_Rect rect = {10, 10, 50, 50}; // posição (10, 10) e tamanho (50x50)
  SDL_RenderFillRect(renderer, &rect);

  // Atualiza a tela
  SDL_RenderPresent(renderer);

  // Espera 5 segundos
  SDL_Delay(5000);

  // Fecha a janela e desaloca memória
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
