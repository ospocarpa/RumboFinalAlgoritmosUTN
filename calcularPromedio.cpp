#include <iostream>

/*Desarrolle una funcion que calcuule el promedio de varios valores */
using namespace std;
 /* con un valor prefijado*/
 float calcularPromedio() {
    float cantidad,valor,suma;
    suma=0;
    cantidad=0;
    float promedio;
    while(cantidad <10) {
        cout <<"Ingrese un numero"<<endl;
        cin>> valor ; cout<<endl;
        suma += valor;
        cantidad++;

    }
    promedio= (suma/cantidad);
    return promedio;
 }

 /* Con Centinela : mientras valor sea menor a cero  */
int calculoPromedio() {
    int cantidad,valor,suma;
    suma=0;
    cantidad =0;
    cout<<"ingrese un valor"<<endl;
    cin>>valor ;
    while(valor >0) {
       suma += valor;
       cantidad ++;
       cout<<"ingrese un valor"<<endl;
       cin >> valor ;
    }
    return(cantidad>0?suma/cantidad:0);


}



 int main() {
  float prom;
  cout<<"calculamos promedio de 10 numeros"<<endl;
  cout<<calcularPromedio()<<endl;
  cout<<"calculamos promedio con centinela"<<endl;
  prom=calculoPromedio();
  cout<<prom<<endl;
 return 0 ;

 }
