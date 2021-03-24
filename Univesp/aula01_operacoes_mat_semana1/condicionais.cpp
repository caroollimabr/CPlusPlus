#include <iostream>

using namespace std; // Para escrever cout ao inves de std::cout

int main(){

    int number1;
    int number2;

    cout << "Digite o primeiro numero: "; //escreve
    cin >> number1; //contabiliza
    cout << "Digite o segundo numero: ";
    cin >> number2;

    if (number1 == number2)
        cout << number1 << " == " << number2 << std:: endl;
    if (number1 != number2)
        cout << number1 << " != " << number2 << std:: endl;
    if (number1 < number2)
        cout << number1 << " < " << number2 << std:: endl;
    if (number1 > number2)
        cout << number1 << " > " << number2 << std:: endl;
    
    return 0;
}