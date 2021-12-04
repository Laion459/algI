#include <iostream>
#include <cmath>

/**
 * valida o tamnaho do array
 * @param lenght tamanho do array
 * @return mensagem de erro caso seja menor o igual a 0
 */
void validateArray(int length){
    if (length <= 0){
        std::cout <<" Erro de compilação! length digitado menor o igual a zero" << std::endl;
        abort();
    }
}

/**
 * somatorio = soma os elementos de um array
 * @param numbers array de floats
 * @param lenght tamanho do array
 * @return soma dos elementos do array
 */
float sum(float numbers[], int length){
    validateArray(length);
    float suma = 0;
    for (int i = 0; i < length; i++){
         suma += numbers[i];
    }
    return suma;
}

/**
 * media = faz a media dos valores de um array
 * @param numbers array
 * @param lenght tamanho do array
 * @return media aritmetica dos valores do array
 */
float averageArray(float numbers[], int length){
    validateArray(length);
    float average = sum(numbers,length)/length;
    return average;
}

/**
 * desvio = calcula o desvio padrao de array
 * @param numbers array para media
 * @param length tamanho do array
 * @return aux retorna valor do desvio
 */
float detour(float numbers[], int length){
    validateArray(length);
    float quadrado = 0;
    float aux = 0;
    for (int i = 0; i < length; i++){
        quadrado += pow(numbers[i] - averageArray(numbers,length), 2);
    }
    quadrado = quadrado / (length - 1);
    aux = sqrtf(quadrado);
    return aux;
}

//menu
/**
 * menu principal com todos os testes individuais
 */
void menu(){
    float numbers[5] = {9.5, 8, 6.3, 5.9, 3 };
    std::cout <<sum(numbers,5)<<std::endl;
    std::cout <<averageArray(numbers,5)<<std::endl;
    std::cout.precision(3);
    std::cout <<detour(numbers,5)<<std::endl;
}

//funçao principal
int main() {
    menu();
    return 0;
}