#include<string>
#include<iostream>

using namespace std;

int main()

{
    int qtpoltronas;
    int npoltrona;
    int F1[600];
    int i;

    for ( i = 0; i < 100; i++)
    {

        cout<<"0. Finalizar\n1. Reservar Poltrona\n2. Mapa de ocupaçãp\n3. Faturamento\n";
        int choice;
        cin >> choice;

        system("clear");

            for (i = 0; i < sizeof(F1)/4; i++)
        {
            F1[i] = i;
        }
    
        switch (choice)
        {
        case 0:
            cout << "Compra Finalizada!\n";
            
            break;

        case 1:

            cout << "Quantos ingressos pretende comprar ?";
            cin >> qtpoltronas;            

            do
            {
                cout << "Digite o número da Poltrona!";
                cin>> npoltrona;

                for  (i = 0; i < sizeof(F1)/4; i++)
                {
                    if (F1[i] == npoltrona)
                    {
                        F1[i] = 0;
                        if (npoltrona <= 200 & npoltrona > 0)
                        {
                            cout << "Poltrona "; cout << npoltrona; cout <<" selecionada com sucesso!\n";
                            
                        }

                        if (npoltrona <= 400 & npoltrona > 200)
                        {
                            cout << "Poltrona "; cout << npoltrona; cout <<" selecionada com sucesso!\n";
                        }

                        if (npoltrona <= 600 & npoltrona > 400)
                        {
                            cout << "Poltrona "; cout << npoltrona; cout <<" selecionada com sucesso!\n";
                        }
                        ;
                    }
                    else if(F1 == 0)
                    {
                        cout << "A poltrona solicitada não está disponivel";
                    }

                }
                qtpoltronas--;
            } while (qtpoltronas != 0);

            cout<<"\n";

            cout << "Mapa atualizado!\n";

            for (i = 0; i < sizeof(F1)/4; i++)
            {
                cout << F1[i]; cout << "\t";
            }            

             cout<<"\n";
            
            break;

        case 2:
            cout << "Este é o mapa de ocupação da sala\n";
            
            for (i = 0; i < sizeof(F1)/4; i++)
            {
                cout << F1[i]; cout << "\t";
            }

             cout<<"\n";

            break;

        case 3:
            cout << "O preço de sua compra é :\n";
            
            break;

        default:
            break;
        }
    }
}
