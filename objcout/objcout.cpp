#include <iostream>
using namespace std;

int main()
{
    //Lembrando que não existe quebra de linha automática no C++, logo, temos que usar sempre o \r
    cout << "Imprimindo o tal do Hello World!\n";

    //Linha com múltiplos comandos
    cout << "Usando mais ";
    cout << "de um count\n";

    // usando o manipulador endl
    // endl gera um caractere nova linha, e também descarrega o buffer de saída
    cout << "Escrevendo uma linha..." << endl;

    cout << "Mais uma vez...\n";
    cout << flush;    // agora apenas esvaziando o buffer de saída, sem gerar nova linha

    return 0;
}