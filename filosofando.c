#include <stdio.h>
#include <stdlib.h>
int HandleRecibeDato(){
    int nroMesa;
    if(mesa[direccion]==0){
        mesa[direccion] = nroMesa;
    }
    direccion++;
    if(direccion==4){
        direccion = 0;
    }

    //
    return nroMesa;
}
void HandleeventoPIR1(){
    detectoObj = 1;
}
void HandleeventoPIR2(){
    detectoObj = 1;
}
void HandleeventoPIR3(){
    detectoObj = 1;
}
int detectoObj = 0;

void moverProducto(int nroServo){
    //Se mueve el servo
}
int mesa[5]={0,0,0,0,0};
int contador[5]={0,0,0,0,0};
int direccion=0;
int main(void){
    int detectoObj = 0;
    while (1)
    {
        mesa[direccion] = RecibeDato(); 
        if(detectoObj){
            
        }
    }
    




    }
