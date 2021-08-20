//Mad lib

#include <iostream>
#include <string>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
	 cout << "Bem-vindo ao Mad Lib.\n\n";
	 cout << "Responda às seguintes perguntas para ajudar a criar uma nova história.\n";

	 string name = askText("Por favor, insira um nome:");
	 string noun = askText("Por favor, insira um substantivo no plural:");
	 int number = askNumber("Por favor, coloque um numero: ");
	 string bodyPart = askText("Por favor, insira uma parte do corpo:");
	 string verb = askText("Por favor, digite um verbo:");

	 tellStory(name, noun, number, bodyPart, verb);
	 return 0;
}

string askText(string prompt)
{
	 string text;
	 cout << prompt;
	 cin >> text;
	 return text;
}

int askNumber(string prompt)
{
	 int num;
	 cout << prompt;
	 cin >> num;
	 return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	 cout << "\nAqui está sua história:\n";
	 cout << "O famoso explorador ";
	 cout << name;
	 cout << " quase desistiu de uma longa jornada para encontrar\n";
	 cout <<"A Cidade Perdida de ";
	 cout << noun;
	 cout << " quando um dia, o";
	 cout << noun;
	 cout << "encontrou o explorador.\n";
	 cout << "Cercado por ";
	 cout << number;
	 cout << " " << noun;
	 cout << ", uma lágrima veio a ";
	 cout << name << "'s ";
	 cout << bodyPart << ".\n";
	 cout << "Depois de todo esse tempo, a missão finalmente acabou.";
	 cout << "E então, o";
	 cout << noun << "\n";
	 cout << "prontamente devorado ";
	 cout << name << ". ";
	 cout << "A moral da história? Cuidado com o que você";
	 cout << verb;
	 cout << " pra.";
}
