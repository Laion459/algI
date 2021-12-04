#include <iostream>
/** minimo de um numero inteiro em um array.
 *
 * @param numbers array de numeros inteiros
 * @param length tamanho fixo do array
 * @return minimum retorna valor minimo de um array de inteiros
 */
int findMinimum(int numbers[], int length){
    if (length <= 0) {
        printf(
                "Erro em tempo de execucao.\n"
                "Argumento 'length' na funcao 'findMinimum’ e menor ou igual a zero"
        );
        abort();
    }
    int minimum = numbers[0];
    for (int i = 0; i < length; i++){
        if (numbers[i] < minimum){
            minimum = numbers[i];
        }
    }
    return minimum;
}

int findMaximum(int numbers[], int length){
    int maximum = numbers[0];
    for (int i = 0; i < length; i++){
        if (numbers[i] > maximum){
            maximum = numbers[i];
        }
    }
    return maximum;
}

//menu
void menu(){
    int numbers[6] = { 10, 30, 20, 60, 50, 40 };
    printf("minimo = %d\n" , findMinimum(numbers, 6));
    printf("maximo = %d\n" , findMaximum(numbers, 6));
}


//função principal.
int main() {
    menu();
    return 0;
}