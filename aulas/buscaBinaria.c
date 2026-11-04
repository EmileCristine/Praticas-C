// Implementando busca binaria

// Conceito: dividir o escopo pela metade para acelerar a busca

// Criam-se dois ponteiros (índices), um apontando para o início (baixo ou lo) e outro para o fim (alto ou hi) do array.
//Encontra-se o índice central usando a fórmula: \(\text{meio} = \lfloor(\text{baixo} + \text{alto}) / 2\rfloor\).
// Comparar o valor central:
	// - Se o valor do meio for igual ao alvo, o elemento foi encontrado e o algoritmo retorna a sua posição.
	// - Se o valor do meio for menor que o alvo, significa que o alvo está na metade direita. O ponteiro baixo é ajustado para meio + 1.
	// - Se o valor do meio for maior que o alvo, significa que o alvo está na metade esquerda. O ponteiro alto é ajustado para meio - 1.
// Repetir: O processo continua até que o elemento seja encontrado ou até que o ponteiro baixo ultrapasse o ponteiro alto (o que indica que o valor não está no conjunto).

#include <stdio.h>
#include <stdlib.h>

int main () {
    
}
