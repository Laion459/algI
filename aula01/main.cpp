#include <iostream>

//escolhe maior numero de um vetor n de inteiros.
int maior_do_vetor(int numbers[]){
    int maior = -100;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++){
        if (numbers[i] > maior){
            maior = numbers[i];
        }
    }
    printf("%d\n",maior);
    return maior;
}

//escolhe menor numero de um vetor n de inteiros.
int menor_do_vetor(int numbers[]){
    int menor = 100;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++){
        if (numbers[i] < menor){
            menor = numbers[i];
        }
    }
    printf("%d\n",menor);
    return menor;
}
//testes individuais.
void menu(){
    int numbers[] = {52,55,66,2,22,822,88};
    maior_do_vetor(numbers);
    menor_do_vetor(numbers);
}

//função principal
int main() {
    menu();
        return 0;
}
