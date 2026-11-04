#include <stdio.h>
#include <locale.h>
#include <windows.h>
     int main(){
        setlocale(LC_ALL, "pt-BR");
        SetConsoleOutputCP(65001);

        int peso = 70;
        int altura = 170;

        printf("\n\nSeu IMC é: %f \n\n", (float)peso/(altura/100.0*altura/100.0));
        return 0;
    }