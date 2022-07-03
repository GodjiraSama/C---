// Calculo da média de 3 números inteiros.cpp
#include <iostream>
int main()
{
    int n1, n2, n3;
    float m;

    std::cout << "Diga o 1 numero\n";
    std::cin >> n1;
    std::cout << "Diga o 2 numero\n";
    std::cin >> n2;
    std::cout << "Diga o 3 numero\n";
    std::cin >> n3;

    m = float(n1 + n2 + n3) / 3;

    std::cout << "A media dos 3 numeros e: \t" << m;
}