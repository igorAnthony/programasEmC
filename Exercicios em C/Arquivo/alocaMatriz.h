int** AlocaMatriz(int nl, int nc)
{
    int i, **aux;
    aux = (int **) malloc(nl * sizeof (int *));
    for(i = 0; i < nl; i++)
    {
        aux[i] = (int *) malloc( nc * sizeof(int) );
    }
    return aux;
}
