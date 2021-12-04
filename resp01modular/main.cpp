#include <iostream>
#include <iomanip>

/**
 * Testa se um número é ímpar (even em inglês).
 * @param number o número inteiro a ser testado
 * @return 1 (true) se o número é ímpar, 0 (false) caso contrário
 */
bool isOdd(int number) {
    // Em C/C++, qualquer valor diferente de zero é interpretado como true.
    // Usa o resto da divisão inteira de número por 2
    // 0 (false) significa que o número é par
    // qualquer outro valor (true) significa que o número é impar
    return number % 2;
}

/**
 * Testa se um número é par (odd em inglês).
 * @param number o número inteiro a ser testado
 * @return 1 (true) se o número é par, 0 (false) caso contrário
 */
bool isEven(int number) {
    // Para testar se um número é par, o resto deve retornar 0.
    // Note que % tem precedência por ==, logo não precisamos usar parênteses.
    // Computacionalmente falando, é mais barato testar se é ímpar.
    return number % 2 == 0;
}

/**
 * Testa se um número é primo.
 * Um número primo é um número inteiro maior do que 1 e
 * que só pode ser dividido por 1 e por ele mesmo.
 * @param number o número inteiro a ser testado
 * @return 1 (true) se o número é primo, 0 (false) caso contrário
 */
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (isEven(number)) return false;
    // como int sempre será positivo, o unsigned permite uma quantidade
    // maior de números com os mesmos 4 bytes
    // i * i <= number otimiza a quantidade de passos do laço, pois para
    // a execução quando chegarmos no último valor possível de i que divida
    // number de modo inteiro
    // i * i é mais barato (processamento) do que srqt(number)
    // i <= sqrt(number) <==> i * i <= number
    // se i > sqrt(number), não faz mais sentido continuar
    // O sqrt seria chamado a cada passo
    for (unsigned int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

/**
 * Verifica se o resto da divisão inteira de dividend por divisor é zero.
 * @param dividend o número que será dividido
 * @param divisor o número pelo qual o dividendo será dividido
 * @return true se o resto da divisão inteira de dividend por divisor é zero,
 *         false caso contrário
 */
bool isDivisibleBy(int dividend, int divisor) {
    return dividend % divisor == 0;
}

// Versão ainda mais otimizada para verificar se um número é primo
// Veja mais explicações em https://en.wikipedia.org/wiki/Primality_test
bool isPrime2(int number) {
    // reduz um "if", garantindo que retorna true para 2 e 3, e false
    // para qualquer número menor ou igual a 1
    if (number <= 3) return number > 1;
    // a ideia é otimizar mais ainda, descartando todos os que
    // são divisíveis por 2 e por 3 (usei a função isDivisibleBy)
    if (isDivisibleBy(number, 2) || isDivisibleBy(number, 3)) return false;
    // como int sempre será positivo, o unsigned permite uma quantidade
    // maior de números com os mesmos 4 bytes
    // i * i <= number otimiza a quantidade de passos do laço, pois para
    // a execução quando chegarmos no último valor possível de i que divida
    // number de modo inteiro
    // i * i é mais barato (processamento) do que srqt(number)
    // O nosso contador inicia agora em 5 (primeiro número que não é
    // divisível por 2 e por 3. O passo é de 6 em 6, pois já testamos,
    // em cada passo, a posição atual e o próximo ímpar.
    for (unsigned int i = 5; i * i <= number; i += 6) {
        // note que o ímpar divisível por 3 sempre é pulado
        // 5 e 7, 11 e 13, 17 e 19, 23 e 25, ...
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}

/**
 * Verifica se number é positivo.
 * @param number o número a ser verificado.
 */
void validatePositiveInt(int number) {
    if (number < 0) {
        std::cout
                << "O valor fornecido deve ser positivo."
                << "Valor informado: " << number << std::endl;
        abort();
    }
}

/**
 * Verifica se a base indicada é válida (2 a 16).
 * @param base a base a ser checkada
 */
void validateBase(int base) {
    if (base < 2 || base > 16) {
        std::cout
                << "Erro: base deve ser entre 2 e 16, inclusive."
                << "Base informada: " << base << std::endl;
        abort();
    }
}

/**
 * Converte um número decimal em sua representação em outra base.
 * A base deve ser entre 2  16. O número original não é modificado.
 * @param number o número decimal a ser
 * @param base a base a ser utilizada na conversão (2 a 16)
 * @return a representação do número decimal informado na base
 * indicada
 */
std::string convertToBase(int number, int base) {
    validatePositiveInt(number);
    validateBase(base);
    std::string digits = "0123456789ABCDEF";
    std::string result = "";
    do {
        result = digits[number % base] + result;
        number /= base;
    } while (number > 0);
    return result;
}

/**
 * Retorna o fatorial do número fornecido. O número original não
 * é modificado.
 * @param number o número
 * @return
 */
long calculateFactorial(int number) {
    // abortar se number < 0
    long mult = 1;
    for (int i = 1; i <= number; i++) {
        mult *= i;
    }
    return mult;
}

/**
 * Retorna a representação de um dado número inteiro em algarismos
 * romanos. O valor do número deve ser entre 1 e 4999.
 * @param number o número inteiro a ser convertido
 * @return a representado do número dado em algarismos romanos
 */
std::string convertToRoman(int number) {
    // abortar se o número não estiver entre 1 e 4999
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    // como o array é preinicializado, length == size
    int length = sizeof(values) / sizeof(int);
    std::string romanNumber = "";
    for (int i = 0; i < length; i++) {
        while (number >= values[i]) {
            romanNumber += romans[i];
            number -= values[i];
        }
    }
    return romanNumber;
}

/**
 * Verifica se year é um ano bissexto.
 * No calendário Gregoriano, o seguintes critérios precisam ser considerados para
 * que um ano seja bissexto:
 *  - O ano deve ser divisível por 4.
 *  - Mas se o ano é divisível por 100, ele não é bissexto, a não ser que ele
 *    também seja divisível por 400
 * @param year o ano a ser verificado
 * @return true quando o ano for bissexto, false caso contrário
 */
bool isLeapYear(int year) {
    // considerando que um ano não pode ser negativo
    validatePositiveInt(year);
    // Primeiro, verificamos se ele é divisível por 100
    //    se for, precisa ser divisível também por 400
    //    se não for, basta verificar se é divisível por 4
    return
            isDivisibleBy(year, 100)
            ? isDivisibleBy(year, 400)
            : isDivisibleBy(year, 4);
}

/**
 * Inverte os dígitos de um dado número. Por exemplo,
 * se number for 1234, retornará 4321.
 * @param number o número a ser invertido
 * @return o número invertido
 */
int reverseNumber(int number) {
    int digit, reverse = 0;
    do {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number /= 10;
    } while (number != 0);
    return reverse;
}

/**
 * Verifica se um número é um palíndromo. Palíndromos são palavras,
 * frases ou números cuja sequência de caracteres é a mesma quando
 * lida da esquerda para a direita ou da direita para a esquerda.
 * @param number o número a ser verificado
 * @return true se o número for um palíndromo, false caso contrário
 */
bool isPalindromeNumber(int number) {
    return number == reverseNumber(number);
}

// Testes

std::string convertBooleanToString(bool value) {
    return value ? "true" : "false";
}

void testOddNumber(int number) {
    // result não pode ser modificado dentro do corpo da função
    const bool result = isOdd(number);
    std::cout
            << "Is " << number << " odd? "
            << result << " " << convertBooleanToString(result) << std::endl;
}

void testOddNumbers() {
    const int numbers[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    std::cout << "bool isOdd(int) test cases (ímpar)" << std::endl;
    const int length = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < length; ++i) {
        testOddNumber(numbers[i]);
    }
    std::cout << std::endl;
}

void testEvenNumber(int number) {
    const bool result = isEven(number);
    std::cout
            << "Is " << number << " even? "
            << result << " " << convertBooleanToString(result) << std::endl;
}

void testEvenNumbers() {
    const int numbers[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    std::cout << "bool isEven(int) test cases (par)" << std::endl;
    const int length = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < length; ++i) {
        testEvenNumber(numbers[i]);
    }
    std::cout << std::endl;
}

void testPrimeNumber(int number) {
    if (isPrime(number)) {
        std::cout << "The number " << number << " is a prime" << std::endl;
    }
}

void testPrimeNumbers() {
    std::cout << "bool isPrime(int) test cases" << std::endl;
    for (int i = 0; i < 200; ++i) {
        testPrimeNumber(i);
    }
    std::cout << std::endl;
}

void testBaseConversion() {
    std::cout << "std::string convertToBase(int number, int base) test cases" << std::endl;
    int value = 12346;
    std::cout << "Binário:  " << convertToBase(value, 2) << std::endl;
    std::cout << "Octal:   " << convertToBase(value, 8) << std::endl;
    std::cout << "Decimal: " << convertToBase(value, 10) << std::endl;
    std::cout << "Hexa:     " << convertToBase(value, 16) << std::endl;
    // para ter uma sequência nos testes, comentar a linha abaixo. Ela aborta o programa.
    //std::cout << "Erro:    " << convertToBase(value, 32) << std::endl;
    std::cout << std::endl;
}

void testFactorial() {
    const int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "long calculateFactorial(int number) test cases" << std::endl;
    const int length = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < length; ++i) {
        std::cout << std::setfill (' ') << std::setw(2) << numbers[i];
        std::cout << "! = " << calculateFactorial(numbers[i]) << std::endl;
    }
    std::cout << std::endl;
}

void testIntToRoman() {
    const int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 99, 156, 560, 900, 1834};
    std::cout << "std::string convertToRoman(int number) test cases" << std::endl;
    const int length = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < length; ++i) {
        std::cout << std::setfill (' ') << std::setw(4) << numbers[i];
        std::cout << " in Roman = " << convertToRoman(numbers[i]) << std::endl;
    }
    std::cout << std::endl;
}

void testLeapYear() {
    std::cout << "bool isLeapYear(int year) test cases" << std::endl;
    for (int year = 2000; year < 2100; ++year) {
        if (isLeapYear(year)) {
            std::cout << year << " is a leap year." << std::endl;
        }
    }
    std::cout << std::endl;
}

void testPalindromeNumber() {
    std::cout << "bool isPalindromeNumber(int number) test cases" << std::endl;
    int numbers[] = {12321, 12345, 35753, 88899, 999};
    int size = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        std::cout << "The reverse of " << numbers[i] << " is " << reverseNumber(numbers[i]);
        if (isPalindromeNumber(numbers[i])) {
            std::cout << " (palindrome)";
        }
        std::cout << std::endl;
    }
}

void runAllTests() {
    testEvenNumbers();
    testOddNumbers();
    testPrimeNumbers();
    testBaseConversion();
    testFactorial();
    testIntToRoman();
    testLeapYear();
    testPalindromeNumber();
}

int main() {
    runAllTests();
    return 0;
}