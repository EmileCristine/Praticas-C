/* Um subvetor w de um vetor v de n números inteiros é obtido ao remover alguns ou nenhum elemento de v sem alterar a ordem dos elementos restantes. Por exemplo, w = [12, 13, 10, 3] é um subvetor de v = [11, 12, 13, 11, 10, 9, 7, 3, 3], mas não é um subvetor de v = [11, 12, 10, 11, 13, 9, 7, 3, 3]. Escreva uma função que verifique se um vetor w é subvetor de v. */

#include <stdio.h>
#include <stdlib.h>

void ler (int v[], int n, char nome) {
    printf("Insira os valores do vetor %c: ", nome);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

void imprimir (int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d", v[i]);
    }
}

int ehSub (int w[], int v[], int tam_w, int tam_v){
    int j = 0;
    
    for(int i = 0; i < tam_v; i++) {
        if (v[i] == w[j]) {
            j++;
                
            if (j == tam_w ) {
               break;
            }
        }
    } 
     
    if (tam_w == j) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char *argv[])
{
	int tam_v, tam_w;
	
	do {
	    printf("Digite o tamanho do vetor V: ");
	    scanf("%d", &tam_v);
	} while (tam_v <= 0);
	
	int *v = (int *) malloc (tam_v * sizeof(int));
	ler(v, tam_v, 'V');
	
	do {
	    printf("Digite o tamanho do vetor W (deve ser menor que V: ");
	    scanf("%d", &tam_w);
	} while (tam_w <=0 || tam_w > tam_v);
	
	int *w = (int *) malloc (tam_w * sizeof(int));
	ler(w, tam_w, 'W');
	
	if (ehSub(w, v, tam_w, tam_v) == 1) {
	    printf ("Eh sub vetor");
	} else { 
	    printf("Nao eh subvetor");
	}
	
	free(v);
	free(w);
	
	return EXIT_SUCCESS;
}
