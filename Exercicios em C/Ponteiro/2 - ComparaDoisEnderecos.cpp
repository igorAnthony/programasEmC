#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int v1 = 1, v2 = 2;
    int *pont1 = &v1;
    int *pont2 = &v2;

    if(pont1 > pont2)
    {
        cout << "endereco v1 maior!" << "v1:" << pont1 << endl << &v1;
    }
    else{
        cout << "endereco v2 maior!";
    }
    return 0;
}
