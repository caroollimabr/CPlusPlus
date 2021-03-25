#include <iostream>

int main() {
  int c[10] = {14, 0, 13}; //vetor tem 10 espacos na memoria, de 0 a 9 c[0,1,2] ja estao declarados
  
  c[5] = 30; 
  c[7] = 40;
  c[8] = 50;

  for (int i = 0; i < 10; i++) {
    std::cout << "c[" << i << "] = " << c[i] << "\n";
  }  
  return 0;
}

