#include <iostream> 

using namespace std; // Para escrever cout ao inves de std::cout

int main(){

    int count;
    int number;
    int sum;

    do {
        cout << "Digite um numero: " << endl;
        cin >> number;

        sum += number;
        count++;
    } while (number != 0);

    float average = (float)sum/(float)(count-1);
    cout << "A media da serie e " << average << endl;

    system ("PAUSE");
    return 0;
}