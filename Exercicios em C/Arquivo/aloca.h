int** AlocaMatriz(int nl, int nc)
{
    matriz = (int **) malloc(nl * sizeof (int *));
    for(i = 0; i < nl; i++)
    {
        matriz[i] = (int *) malloc( nc * sizeof(int) );
    }
    return matriz;
}
