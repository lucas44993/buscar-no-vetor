#include <stdio.h>

#define TAMANHO_VETOR 10
int vetor[TAMANHO_VETOR] = {8, 3, 5, 6, 2, 1, 4, 9, 7, 10};

int Buscar(int numero, int n){
    for (int i = 0; 1 <= n; i++){
        if (vetor[i] == numero) {
            return i;
        }
    }
    return n+1;
}

void Inserir(int Valor, int Posicao){
    if(Posicao > TAMANHO_VETOR){
        return;
    }
    vetor[Posicao] = Valor;
}

void imprimirVetor(int vetor[], int tamanho){
    printf("Vetor:");
    for (int i = 0; i < tamanho; i++){
        if (vetor[i]==0){
            printf("");
        }
        else{
            printf(" %d", vetor[i]);
        }
    }
    printf("\n");
}

int main(){
    int Encontrar;
    int ValorInserir;
    int PosicaoInserir;
    printf("Digite um numero para encontrar no vetor:");
    scanf("%d", &Encontrar);
    int PosicaoEncontrada = Buscar(Encontrar, TAMANHO_VETOR);

    if (PosicaoEncontrada == TAMANHO_VETOR + 1){
        printf("Valor não encontrado\n");
    }
    else{
        printf("Valor encontrado na posicao: %d\n", PosicaoEncontrada);
    }
    return 1;
}
