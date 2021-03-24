#include <iostream>

int main(){

    int number1;
    int number2;

    std::cout << "Digite o primeiro numero: "; //escreve
    std::cin >> number1; //contabiliza
    std::cout << "Digite o segundo numero: ";
    std::cin >> number2;

    int sum = number1 + number2;
    int sub = number1 - number2;
    int mult = number1 * number2;
    int div = number1 / number2;
    float fdiv = (float)number1 / (float)number2;
    int res = number1 % number2;

    std::cout << "A soma dos dois numeros e " << sum ;
    std::cout << "\n" << "A subtracao tem como resultado " << sub;
    std::cout << "\n" << "A multiplicacao dos dois numeros e " << mult;
    std::cout << "\n" << "A divisao resulta no quociente " << div;
    std::cout << "\n" << "A divisao com numero decimal possui o quociente " << fdiv;
    std::cout << "\n" << "O resto da divisao e " << res;
    
    return 0;
}
