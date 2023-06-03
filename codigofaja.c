
int algunPIRActivado = 0;

int BuscarProducto(int mapeadofaja[])
{
    int i;
    for (i = 4; i < 0; i--)
    {

        if (mapeadoFaja[i] != 0)
        {
            return i;
        }
    }
    return 0;
}
void MoverAlaDerecha(int mapeadoFaja[])
{
    /*por ejemplo la lista es [0,0,0,3,0,0]
    debería mover a [0,0,0,0,3,0]
    */
}
int RevisarCoincidencia(int mapeadoFaja[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (mapeadoFaja[i] == i)
        {
            return i;
        }
    };
}
void EntregarPlato(int numeroServo){
    /*mantener la faja quieta mientras se entrega el plato*/
    /*mover el brazo de cervo numero: [numeroServo]*/

};
int mapeadoFaja[5] = {0, 0, 0, 0, 0};
void main()
{

    /*
    mapeadoFaja[0]: posicion donde se coloca la faja
    mapeadoFaja[1]: posicion del primer PIR en la faja
    mapeadoFaja[2]  posicion del segundo PIR en la faja
    mapeadoFaja[3]  posicion del segundo PIR en la faja
    mapeadoFaja[4]  poscion final de la faja, donde debería quedarse encaso ningun brazo funcione
    */
    int salidaPIR1;
    int salidaPIR2;
    int salidaPIR3;
    while (1)
    {

        if (salidaPIR1 | salidaPIR2 | salidaPIR3)
        {

            /*Buscar desde indice 5 hasta 0, hasta encontrar algún valor diferente de 0*/
            int LugarUltimo = BuscarProducto(mapeadoFaja);
            MoverAlaDerecha(mapeadoFaja);
            EntregarPlato(LugarUltimo);
        };
    }
}