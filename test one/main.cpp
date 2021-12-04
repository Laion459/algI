#include <iostream>

//1. Verificar se um número inteiro é par ou ímpar.
 int par_ou_impar(int number){
    printf("digite um numero para verificar se e par ou impar:  ");
    scanf("%d", &number);

// testa o numero resto 0 par, se nao impar.
    if (number % 2 == 0){
        printf(" o numero e par  ");
    }
    else{
        printf(" o numero e impar  ");
    }
}


//2. Verificar se um número inteiro é primo.
int primo(int number){
    printf(" Digite um numero para verificar se e primo: ");
    scanf("%d", &number);

    if ((number == 1) or (number == -1)) {
        printf(" Numero 1 nao e primo");
        return 0;
    }

    int  i, resultado = 0;
// numero dividindo sucessivamente
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            resultado++;
            break;
        }
    }

//testa  o resultado
    if (resultado == 0)
        printf("%d e um numero primo\n", number);
    else
        printf("%d nao e um numero primo\n", number);
    }

//3. Converter um número decimal para um número binário.
int decimal_para_binario(int number){
    //entrada de dados.

    printf("Digite um numero decimar para converter a binario: ");
    scanf("%d", &number);

    //declaração de variaveis.
    int resto = 0;
    int binario[0];
    int binarios[0];
    int i = 0;

    //processamento dos dados
    //divide o numero sucessivamente dando origem aos binarios, pelo resto da divisão.
    while (number > 0){
        resto = number % 2;
        if (resto == 0){
            binario[i] = 0;
            i++;
            number = number / 2;
        } else {
            binario[i] = 1;
            number = number / 2;
            i++;
        }
        printf("%d",binario[i]);
    }
    //ordena o vetor.
    for (int x = 0; x < sizeof(binarios) / sizeof(int); x++) {
        int z = (sizeof(binarios) / sizeof(int) * -1);
        binarios[x] = binario[z];
        printf("%d\n",binarios[z]);
    }

    //printa o vetor ===> binario
    for (int j = 0; j < sizeof(binarios) / sizeof(int ); j++) {
        printf("%d ",binarios[j]);
        printf(" # ");
        printf("%d ",binario[j]);
        printf(" ####### ");
    }
}

//5. Calcular o fatorial de um número.
int fatorial(int number){
    printf(" Digite um numero para calcular seu fatorial: ");
    scanf("%d", &number);

    if (number == 0){
        printf("0! = 1");
    }
    if (number == 1){
        printf("1! = 1");
    }
    int resultado = 1;
    int aux = number -1;

    for (int i = 0; i < number; i++){
        resultado = resultado * (number - aux);
        aux--;
    }
    printf("%d\n",resultado);
}

//6. Calcular o somatório da série 1!/1+2!/2+3!/3+4!/4+5!/5..., onde n! representa o fatorial de n.
int somatorio_da_serie(int number){
    int soma = 0;
    printf("Digite um numero para somar a serie: ");
    scanf("%d\n", &number);

    for (int i = 1; i < number; i++){
        soma = i / ((i+1) + fatorial(i+1));
    }
    printf("%d\n", soma);
}

//testes individuais.
void test01(){
    int number = 0;
    par_ou_impar(number);
}

void test02(){
    int number = 0;
    primo(number);
}

void test03(){
    int number = 0;
    decimal_para_binario(number);
}

void test05(){
    float number = 0;
    fatorial(number);
}

void test06(){
    int number = 0;
    somatorio_da_serie(number);
}

//todos os testes == MENU.
void menu(){
    //test01();//par ou impar.
    //test02();//numero primo.
    //test03();//decimal para binario.   **com defeito***.
                //falta implementar exercicio 04-sequencia exer 03.
    //test05();//fatorial de um numero.
    test06();//somatorio da serie.
}


//função principal
int main() {
    menu();
    return 0;
}
