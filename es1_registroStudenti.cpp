#include <iostream>
#include <random>
using namespace std;
const int STUDENTI = 3;
const int PROVE = 4;

void acquisisciVoti(int mat[][PROVE], int rig, int col)
{
    for (int i = 0; i < rig; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Inserisci il voto dello studente " << j + 1 << " alla prova " << i + 1 << endl;
            cin >> mat[i][j];
        }
    }
}

void stampaTrattini(int PROVE)
{
    cout << "    ";
    for (int i = 0; i < PROVE; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = PROVE * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
}

void stampaRegistro(int mat[][PROVE], int rig, int col)
{
    for (int i = 0; i < rig; i++)
    {
        cout << i << "|  ";

        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int registro[STUDENTI][PROVE];
    cout << "REGISTRO STUDENTI\n"
         << endl;
    acquisisciVoti(registro, STUDENTI, PROVE);
    stampaTrattini(PROVE);
    stampaRegistro(registro, STUDENTI, PROVE);
}