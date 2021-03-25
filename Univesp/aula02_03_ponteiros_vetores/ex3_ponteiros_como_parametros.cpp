//Ponteiro - variavel cujo conteúdo e um endereço de memoria, nao e um valor no sentido tradicional

#include <iostream>

using namespace std;

//passagem de ponteiros

//esta funcao nao altera o valor da variavel que estava fora da função.
void valor_alocando_memoria(int* p) //ponteiro
{
  p = new int;
  *p = 7;
}

//esta altera, modificando o endereco de memoria para onde o ponteiro aponta
void valor_modificando_memoria(int* p)
{
  *p = 8;
}

//altera o endereco para onde aponta a variavel p3
void referencia(int*& p)
{
  p = new int;
  *p = 9;
}

int main()
{
  //invocando metodos
  int a  = 1;
  int b  = 2;
  int c  = 3; 
  int* p1 = &a; //& - permite obter endereço de memoria da variavel
  int* p2 = &b;
  int* p3 = &c;

  cout <<"Antes: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout <<"Antes: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << endl;
  
  valor_alocando_memoria(p1); 
  valor_modificando_memoria(p2);
  referencia(p3);  

  cout << "Depois: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout << "Depois: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << "Depois: "<< a <<" "<< b <<" "<< c << endl;

  return 0;
}
