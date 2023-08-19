#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string nome;

    cout << "Informe seu nome completo:\n";
    getline(cin, nome);

    cout << nome;

    return 0;
}