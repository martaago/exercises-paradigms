// Aventura Personalizada

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;              


int main()
{
    const int GOLD_PIECES = 900;
    int adventures, killed, survivors;
    string leader;

    //get the information
    cout << "Bem-vindo a Fortuna Perdida\n\n";
    cout << "Por favor, informe o seguinte para sua aventura personalizada\n";

    cout << "Digite um Numero: ";
    cin >> adventures;

    cout << "Digite outro Numero, menor que o primeiro: ";
    cin >> killed;

    survivors = adventures - killed;

    cout << "Digite seu Sobrenome: ";
    cin >> leader;

    //tell the story
    cout << "\nUm grupo corajoso de " << adventures << " sairam em uma jornada ";
    cout << "-- em busca do tesouro perdido dos Antigos Anoes. ";
    cout << "o grupo era liberado pelo famoso ladino, " << leader << ".\n";

    cout << "\nDurante o trajeto, um bando de Ogros Saqueadores emboscaram o grupo. ";
    cout << ", e os Ogros foram derrotados, mas a um custo. ";
    cout << "Dos aventureiros, " << killed << " foram derrotados, ";
    cout << "deixando apenas " << survivors << " no grupo.\n";

    cout << "\n O bando estava preste a abandonar todas as esperanças. ";
    cout << "Mas enquanto escavavam os tumulos para os amigos, ";
    cout << "eles encontraram um tesouro enterrado. ";
    cout << "Entao os aventureiros dividiram " << GOLD_PIECES << " moedas de ouro. ";
    cout << leader << " ficou com a sobra de " << (GOLD_PIECES % survivors);
    cout << " moedas para manter tudo justo.\n";

    return 0;
}
