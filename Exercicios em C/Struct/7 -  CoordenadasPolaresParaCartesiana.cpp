#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
using namespace std;
typedef struct{
    double rad;
    double raio;
}Polar;
typedef struct{
    double x;
    double y;
}Cartesiano;
int main()
{
    Polar polar;
    Cartesiano cart;
    cout << "Digite o valor do radiano:";
    cin >> polar.rad;
    cout << "Digite o valor do raio";
    cin >> polar.raio;
    cart.x = cos(polar.rad)*polar.raio;
    cart.y = sin(polar.rad)*polar.raio;
    cout << "Coordenada cartesiana" << endl << "x:" << cart.x << endl << "y:" << cart.y;
}
