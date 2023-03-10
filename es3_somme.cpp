#include <iostream>
#include <random>
using namespace std;
const int RIGHE = 7;
const int COLONNE = 7;

void inizializzaRandom(int mat[][COLONNE])
{
    for (int i = 0; i < RIGHE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }
}

void stampaTrattini(int RIGHE)
{
    cout << "    ";
    for (int i = 0; i < COLONNE; i++)
    {
        cout << " " << i << " ";
    }
    cout << endl;
    int trattini = COLONNE * 3 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
}

void stampaMatrice(int mat[][COLONNE])
{
    for (int i = 0; i < RIGHE; i++)
    {
        cout << i << "|   ";

        for (int j = 0; j < COLONNE; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrice[RIGHE][COLONNE];
    inizializzaRandom(matrice);
    stampaTrattini(COLONNE);
    stampaMatrice(matrice);
}