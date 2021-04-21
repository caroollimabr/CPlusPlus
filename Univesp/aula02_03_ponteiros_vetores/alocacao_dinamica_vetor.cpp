#include <iostream>

int main (){
    int num_elem;

    std::cout << "Digite o tamanho do vetor: "; //O tamanho do vetor pode mudar em diferentes execucoes
    std::cin >> num_elem;

    int* c = new int[num_elem];

    for (int i = 0; i < num_elem; i++){
        c[i] = 2*i;
    }
    for (int i = 0; i < num_elem; i++){
        std::cout << "c[" << i << "] = " << c[i] << "\n";
    }

    return 0;
}