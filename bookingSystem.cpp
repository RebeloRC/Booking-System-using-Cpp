#include<string>
#include<iostream>
#include <iomanip>

using namespace std;

#define LIN 5
#define COL 40

int resposta;

void mostra_matriz(int **mat)
{
	int i;
	int j;
	int k;
	
	// Inicialização de cada "linha" do aray
	mat = new int*[5];
	
	for(i=0; i<LIN; ++i) // Percorre as linhas
	{
		mat[i] = new int[40]; // Inicialização de cada coluna
	}
	// Fim da declaração do array
	
	k = 0;
	for(i=0; i<LIN; ++i)
	{
		for(j = 0; j<COL; ++j)
		{
			mat[i][j] = 0;
		}
	}
	
	for(i=0; i<LIN; ++i)
	{	
		for(j = 0; j<COL; ++j)
		{
			cout << setw(1) << (mat[i][j]==0?".":"#")  << " | ";
		}
		cout << endl;
	}
}

void reserva_de_lugares(int **x)
{

	int resposta;
	int selecionarpoltrona;
	int selecionarfileira;
	int selecionarcoluna;

	for (int C=1; C < 15; C++)
	{
		for (int F=1; F < 40; F++)
		{
		cout << setw(1) << (x[C][F]==0?".":"#") << "| ";
		}
	}

	cout <<"\n\n Qual fileira deseja reservar?: ";
	cin >> selecionarfileira;
	cout <<"\n\n Qual coluna deseja reservar?: ";
	cin >> selecionarcoluna;

	if(selecionarcoluna <=5)
	{
		if(x[selecionarcoluna][selecionarfileira] == 0)
		{
			x[selecionarcoluna][selecionarfileira] = 1;
			cout << "assento reservado\n\n";
		}
	}

	else
	{
		cout << "assento indisponivel ";
	}

}



int main()
{

		do
	{
	
		int **teste;
		int **r;
		int resposta;


	    cout<<"0. Finalizar\n1. Reservar Poltrona\n2. Mapa de ocupaçãp\n3. Faturamento\n";
        cin >> resposta;

		switch(resposta)
			{
				case 0:
				return 0;
				case 1:
					cout << "=======================" << endl;
				reserva_de_lugares(r);
				break;
				case 2:
					cout << "=======================" << endl;
				mostra_matriz(teste);
				break;
				case3:
				cout << "Teste3";
				break;
			}

	} while (resposta =! 0);


}
