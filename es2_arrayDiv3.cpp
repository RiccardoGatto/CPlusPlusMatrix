#include <iostream>
#include <random>
using namespace std;
const int RIGHE = 10;
const int COLONNE = 5;

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
        cout << i << " ";
    }
    cout << endl;
    int trattini = COLONNE * 2 + 4;
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
        cout << i << "|  ";

        for (int j = 0; j < COLONNE; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int conta(int mat[][COLONNE])
{
    int cont = 0;
    for (int i = 0; i < RIGHE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            // cout << "i=" << i << "j=" << j << endl;
            if ((mat[i][j] % 3 == 0) and (mat[i][j] != 0))
            {
                cont++;
            }
        }
    }
    return cont;
}

int *prendiDivisibili3(int mat[][COLONNE], int lung)
{
    int *arrayDivisibili = new int[lung];
    int indiceDiv = 0;
    for (int i = 0; i < RIGHE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            if ((mat[i][j] % 3 == 0) and (mat[i][j] != 0))
            {
                arrayDivisibili[indiceDiv] = mat[i][j];
                indiceDiv++;
            }
        }
    }
    return arrayDivisibili;
}

void mostra(int arr[], int lung)
{
    for (int i = 0; i < lung; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int matrice[RIGHE][COLONNE];
    inizializzaRandom(matrice);
    stampaTrattini(COLONNE);
    stampaMatrice(matrice);
    int quanti = conta(matrice);
    int *divisibili = prendiDivisibili3(matrice, quanti);
    mostra(divisibili, quanti);
}