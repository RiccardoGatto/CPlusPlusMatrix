#include <iostream>
#include <random>
using namespace std;
const int RIGHE = 5;
const int COLONNE = 3;

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

void stampaTrattini(int col)
{
    cout << "   ";
    for (int i = 0; i < col; i++)
    {
        cout << " " << i << " ";
    }
    cout << endl;
    int trattini = col * 3 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
}

void stampaMatrice(int mat[][COLONNE])
{
    stampaTrattini(COLONNE);
    for (int i = 0; i < RIGHE; i++)
    {
        cout << i << "| ";

        for (int j = 0; j < COLONNE; j++)
        {
            cout << " " << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void stampaRigheInvertite(int mat[][COLONNE])
{
    stampaTrattini(COLONNE);
    int indice = 0;
    for (int i = RIGHE - 1; i >= 0; i--)
    {
        cout << indice << "| ";

        for (int j = 0; j < COLONNE; j++)
        {
            cout << " " << mat[i][j] << " ";
        }
        indice++;
        cout << endl;
    }
}

void stampaColonneInvertite(int mat[][COLONNE])
{
    stampaTrattini(COLONNE);
    for (int i = 0; i < RIGHE; i++)
    {
        cout << i << "| ";

        for (int j = COLONNE - 1; j >= 0; j--)
        {
            cout << " " << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void stampaMatriceTrasposta(int mat[][COLONNE])
{
    stampaTrattini(RIGHE);
    int col = RIGHE;
    int rig = COLONNE;
    int indice=0;

    for (int i = 0; i < rig ; i++)
    {
        cout << indice << "| ";
        indice++;
        for (int j = 0; j < col; j++)
        {
            cout << " " << mat[j][i] << " ";
        }
        cout << endl;
    }

}

int main()
{
    int matrice[RIGHE][COLONNE];
    inizializzaRandom(matrice);
    cout << "MATRICE ORIGINALE" << endl;
    stampaMatrice(matrice);
    cout << endl
         << "MATRICE A RIGHE INVERTITE" << endl;
    stampaRigheInvertite(matrice);

    cout << endl
         << "MATRICE A COLONNE INVERTITE" << endl;
    stampaColonneInvertite(matrice);
    cout << endl
         << "MATRICE TRASPOSTA" << endl;
    stampaMatriceTrasposta(matrice);
}