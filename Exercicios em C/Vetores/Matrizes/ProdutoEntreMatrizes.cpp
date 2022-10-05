#include <string>
#include <iostream>
#define TAM 15
using namespace std;
int main()
{
    int aux = 0, m, n, m1, n1, i, j, i1, j1;
    cout << "Digite linha e coluna na ordem da primeira matriz:";
    cin >> m >> n;
    int mat[m][n];
    cin.ignore();
    cout << "Digite linha e coluna na ordem da segunda matriz:";
    cin >> m1 >> n1;
    int mat1[m1][n1];
    if(n == m1)
    {
    }
    else{
        return 0;
    }
    int mat2[m][n1];
    for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        for(i = 0; i < m1; i++)
        {
            for(j = 0; j < n1; j++)
            {
                cin >> mat1[i][j];
            }
        }
    for(i1 = 0; i1 < m; i1++)
    {
        for(j1 = 0; j1 < n1; j1++)
        {
            for(i = 0; i < m; i++)
            {
                for(j = 0; j < n1; j++)
                {
                mat2[i1][j1] = aux  + mat[i][j]*mat1[j][i];
                aux = mat2[i][j];
                }
            aux = 0;
            }
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n1; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
}


