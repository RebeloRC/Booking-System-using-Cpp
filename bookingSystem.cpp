#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <locale.h>

using namespace std;

#define LIN 15
#define COL 40
int quantidadeVIP;
int quantidadePremiun;
int quantidadeComun;
int resposta;
int selecionarpoltrona;
int selecionarfileira;
int selecionarlugar;
int preco;


void mapaSala(int** x)
{
	for (int C = 1; C <= 15; C++)
	{
		for (int F = 1; F <= 40; F++)
		{
			cout << setw(1) << (x[C][F] == 0 ? "." : "#") << "| ";
		}
		cout << "\n";
	}
}
void reserva_de_lugares(int** x)
{
	mapaSala(x);


	cout << "\n============PRECOS===========" << endl;
	cout << "Fileiras 1 a 5: R$ 50,00\nFileiras 6 a 10: R$ 30,00\nFileiras 11 a 15: R$ 15,00";
	cout << "\n\n Qual fileira deseja reservar?: ";
	cin >> selecionarfileira;
	cout << "\n\n Qual coluna deseja reservar?: ";
	cin >> selecionarlugar;
	if (selecionarfileira <= 5 && selecionarfileira > 0)
	{
		if (x[selecionarfileira][selecionarlugar] == 0)
		{
			system("clear");
			x[selecionarfileira][selecionarlugar] = 1;
			cout << "============RESERVA===========" << endl;
			cout << "\n\nAssento reservado com sucesso!\n\n";
			quantidadeVIP++;
			preco += 50;
		}

		else 
		{	system("clear");
		cout << "============RESERVA===========" << endl;
			cout << "\n\nAssento indisponivel!\n\n ";
		}
	}
	else {
		if (selecionarfileira >= 6 && selecionarfileira <= 10) {
			if (x[selecionarfileira][selecionarlugar] == 0)
			{
				x[selecionarfileira][selecionarlugar] = 1;
				system("clear");
				cout << "============RESERVA===========" << endl;
				cout << "\n\nAssento reservado com sucesso!\n\n";
				quantidadePremiun++;
				preco += 30;
			}
			else {
				system("clear");
				cout << "============RESERVA===========" << endl;
				cout << "\n\nAssento indisponivel!\n\n ";

			}
		}
		else if (selecionarfileira >= 11 && selecionarfileira <= 15) {
			if (x[selecionarfileira][selecionarlugar] == 0)
			{
				x[selecionarfileira][selecionarlugar] = 1;
				system("clear");
				cout << "============RESERVA===========" << endl;
				cout << "\n\nAssento reservado com sucesso!\n\n";
				quantidadeComun++;
				preco += 15;
			}
			else {
				system("clear");
				cout << "============RESERVA===========" << endl;
				cout << "\n\nAssento indisponivel\n\n";

			}
		}
		else {
			system("clear");
			cout << "============RESERVA===========" << endl;
			cout << "\n\nEscolha indisponivel!\n\n";
		}
	}
}

int main(int argc, char** argv)
{

	int i;
	int j;


	int** mat;

	// Inicialização de cada "linha" do aray
	mat = new int*[15];

	for (i = 0; i <= LIN; ++i) // Percorre as linhas
	{
		mat[i] = new int [40]; // Inicialização de cada coluna
	}
	// Fim da declaração do array


	for (i = 0; i <= LIN; ++i)
	{
		for (j = 0; j <= COL; ++j)
		{
			mat[i][j] = 0;
		}
	}

	while (true) {
		cout << "\n============MENU===========" << endl;
		cout << "0- Finalizar programa\n1- Reservar poltrona\n2- Mapa de ocupacao\n3- Faturamento\n";
		cout << "Selecione uma das opcoes: ";
		cin >> resposta;

		switch (resposta)
		{
		case 0:
			system("clear");
			return 0;
		case 1:
			system("clear");
			cout << "============RESERVA===========" << endl;
			reserva_de_lugares(mat);
			break;
		case 2:
			system("clear");
			cout << "============MAPA-DA-SALA============" << endl;
			mapaSala(mat);
			break;
		case 3:
			system("clear");
					cout << "============FATURAMENTO===========" << endl;
			cout << "Fileiras VIP reservadas:"; cout << quantidadeVIP << endl;
			cout << "Fileiras premium reservadas:"; cout << quantidadePremiun << endl;
			cout << "Fileiras comum reservadas:"; cout << quantidadeComun << endl;
			cout << "\n\nO preço total do faturamento é de: R$";
			cout << preco << endl;
			break;

		}
	};
}