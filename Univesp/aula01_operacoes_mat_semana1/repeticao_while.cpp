#include <iostream> 

using namespace std; // Para escrever cout ao inves de std::cout

int main(){

    int number1;
    int counter = 0;
    int ammount = 0;

    while (counter < 3) {
        cout << "Digite um numero (" << counter << ")" << endl;
        cin >> number1;

        if (number1 < 5) {
            ammount++;
        }

        counter++;
        cout << "\n" << "A quantidade final e " << ammount << "\n";
    }
    return 0;
}