#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
    Conta umaConta(123);

    cout << "Id da conta: " << umaConta.id << endl;

    return 0;
}
