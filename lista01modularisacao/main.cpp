#include <iostream>
/**
 * par ou impar = verifica se um numero inteiro e par
 * @param number numero a ser testado
 * @return result retorna numero mod 2 == 0
 */
int evenOuOdd(int number){
    int result = 0;
    if (number % 2 == 0) {
        result = 0;
    } else {
        result = 1;
    }
    if (result == 0){
        std:: cout <<number;
        std:: cout << " numero e par!" << std::endl;
    }else{
        std:: cout <<number;
        std:: cout << " numero e Impar!" << std::endl;
    }
    return result;
}

/**
 * verifica se numero e primo
 * @param number numnero teste
 * @return resposta se pertence aos primos ou nao
 */
int primeNumber(int number){
    if ((number == 1) or (number == -1)) {
        std:: cout << " Numero 1 nao e primo!" << std::endl;
        return 0;
    }

    int result = 0;
    // numero dividindo sucessivamente
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            result++;
            break;
        }
    }
    //testa  o resultado
    if (result == 0)
        std::cout <<number<< " e um numero primo! " << std::endl;
    else
        std::cout << number << " nao e um numero primo! " <<std::endl;
    return result;
}

int decimalABinary(int number){
    int binario[0];
    for (int i = number+1; i > number; i--){
        if (number % 2 == 0){
            binario[i] = 0;
            number /= 2;
        }else{
            binario[i] = 1;
            number /= 2;
        }
        std::cout << binario[i];
    }
    std::cout << " "<< std::endl;
}

std::string toBinary(int number){
    std::string r;
    while (number != 0){
        r += ( number % 2 == 0 ? "0" : "1" );
        number /= 2;
    }
    return r;
}

void convertToBinary(){
    std::cout<<" t "<<std::endl;//decimal a binario II
}

//todos os testes individuais
void menu(){
    int number = 8;
    evenOuOdd(number);//numero par ou impar
    primeNumber(number);//numero primo
    decimalABinary(number);//decimal a binario I
    std::cout<<toBinary(number)<<std::endl;//decimal a binario II
    convertToBinary();//converte decimal a binario III
}

//Lista de exercicios de modularização

int main() {
    menu();
    return 0;
}
