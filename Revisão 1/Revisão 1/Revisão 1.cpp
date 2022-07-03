// Revisão 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int n1, n2,p;

    std::cout << "Qual o 1 numero que quer saber o produto?\n";

    std::cin >> n1;

    std::cout << "Qual o 2 numero que quer saber o produto?\n";

    std::cin >> n2;

    p = n1 * n2;

    std::cout << "O produto de "<< n1 <<" por " << n2 <<" e:\t"<< p;
}

