#include<string>
#include<iostream>
#include <iomanip>

using namespace std;

#define LIN 5
#define COL 40




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

int main()
{
    int **teste;

	mostra_matriz(teste);
	cout << "=======================" << endl;

}
