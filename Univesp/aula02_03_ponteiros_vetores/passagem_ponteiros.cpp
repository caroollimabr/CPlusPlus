#include <iostream>
using namespace std;

//não altera o valor da variável que estava fora da função
//não modifica o endereço para o qual o ponteiro de fora da função estava apontando
void valor_alocando_memoria(int* p){ 
    p = new int;
    *p = 7;
}

// altera o valor da variável que estava fora da função
void valor_modificando_memoria(int* p){
    *p = 8;
}

//altera o endereço para onde aponta a variável p3
void referencia(int*& p){
    p = new int;
    *p = 9;
}

int main (){

    int a = 1;
    int b = 2;
    int c = 3;
    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;

    cout << "Antes: " << p1 <<" "<< p2 <<" "<< p3 << endl;
    cout << "Antes: " << *p1 <<" "<< *p2 <<" "<< *p3 << endl;
    cout << endl;

    valor_alocando_memoria(p1);
    valor_modificando_memoria(p2);
    referencia(p3);

    cout << "Depois: " << p1 <<" "<< p2 <<" "<< p3 << endl;
    cout << "Depois: " << *p1 <<" "<< *p2 <<" "<< *p3 << endl;
    cout << "Depois: " << a <<" "<< b <<" "<< c << endl;
    cout << endl;

    return 0;
}