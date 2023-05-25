#include <stdio.h>

float funcao(float xDaFuncao,char func[100]){
    // pode ser alterado para qualquer tipo de funcao polinomial!
    return xDaFuncao * xDaFuncao;
}

int somatorio(float a, float b, int n, char func[100]){
    int index = 1;
    double soma = 0;
    int multiplicador = n - index;
    while(multiplicador > 0){
        float xDaFuncao = a + (b - a) / n * multiplicador;
        soma += funcao(xDaFuncao,func);
        multiplicador--;
    }
    return soma;
}

int main(int argc, char const *argv[]){
    float a = 0; // Ponto inicial da integral
    float b = 0; // Ponto final da integral
    int n = 0; // Precisao da integral
    char func[100];

    printf("Digite o limite inferior da integral: ");
    scanf("%f",&a);

    printf("Digite o limite superior da integral: ");
    scanf("%f",&b);

    printf("Digite um valor de precisao para a integral, quanto maior mais preciso o resultado!: ");
    scanf("%d",&n);

    printf("Digite a expressao da funcao: ");
    scanf("%s",&func);


    float result = (b - a) / n * somatorio(a, b, n,func);
    printf("\nResultado: %f", result);

    return 0;
}
