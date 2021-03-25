#include <iostream> 

using namespace std; // Para escrever cout ao inves de std::cout

void troca_por_referencia(int &valor1, int &valor2){ //& - permite obter endereço de memoria da variavel
    int temp;
    temp = valor1;
    valor1 = valor2;
    valor2 = temp;
}

int main(){
    int valor1 = 7, valor2 = 10;
    cout << "Antes: valor1 = "<< valor1 <<", valor2 = " << valor2 << endl;
    troca_por_referencia(valor1, valor2);
    cout << "Depois: valor1 = "<< valor1 <<", valor2 = " << valor2 << endl;
    return 0;
}