// Escreva um programa que, dado um vetor de números inteiros, verifique se o vetor é um palíndromo, ou seja, se ele pode ser lido da mesma forma da esquerda
// para a direita e da direita para a esquerda.

void ordenar(int v[], int n) { //com bubble sort
     for(int j = 0; j < n; j++) { // passa pelo vetor e ta executando n vezes independente se ja esta ordenado,

        int trocas = 0; // conta qnts trocas aconteceram, se for 0 ja esta ordenado


        for(int i = 0; i < n - j- 1; i++) { // passa pelo vetor analisando
            if(v[i] > v[i+1]){ // se o da direita for maior que o da esquerda ||
                                // problema, qnd for a ultima iteracao vai da error pq o vetor vai tentar acessar um indice inexistente, por isso, "n-1"
                                // mas para otimizar n - j - 1 para diminuir a qtd de iteracoes de , pois n precisa comparar com os ultimo valor q 
                                //foi ordenado depois de cada chamada, pois ele ja esta no lugar certo, pois essa função ordena primeiro os maiores no fim e vem vindo ao inicio
                trocar(&v[i], &v[i+1]); // chama a função de troca
                trocas++; // add uma troca ao contador
            }
        }
        if (trocas = 0) { //se é verdade,  quer dizer q esta em ordem pois n tem numero a direita que seja maior que o da esquerda, ai para o for pois ja esta ordenado
            break;
        }
    }
}
