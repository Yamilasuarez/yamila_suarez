#include <iostream>
#include <string.h>
#include <stdio.h>
//1 hice el menu con un void global
//2 ingreso a anio biniesto ahi hice que anio sea Anio%100 distinto a 0 y que  Anio%400  sea igual a 0
//despues muestro en pantalla si 2024 es biniesto y 2023 no lo es
//3 ingreso a tabla de multiplicar inversa lo que hice fue ingresar un numero ,despues un for del 10 al 1 con el i-- para que
//en cada resta vaya restando y hice que numero sea el numero que elegis por i para que empice de 10 y vaya restando por vuelta
//despues mostre cual es la multiplicacion

using namespace std;

void menu(){
system ("cls");
cout<<"             MENU                "<<endl;
cout<<" 1-       ANIO BISIESTO           "<<endl;
cout<<" 2-  TABLA DE MULTIPLICAR INVERSA"<<endl;
cout<<" 3-         FIZZ BUZZ            "<<endl;
cout<<" 0-            SALIR             "<<endl;

}

int main()
{
    int salir;
    int opcion;
    int Anio;
    int numero;
    int i;

    do{
    menu();
    cin>>opcion;

        while (opcion=0);

      switch (opcion){

                       case 1:

                          cout << "ingrese un anio: ";
                              cin >> Anio;
                        if (Anio%4 == 0 ){
                                cout << "tu anio es biciesto";
                                          }
                        else if (Anio%100 != 0 && Anio%400 == 0){
                                cout << "2024 es un anio biciesto";
                       }
                         else{
                                cout << "2023 no es un anio biciesto";
                                                       }
                           break;
                       case 2:
                              cout<<"ingrese un numero :"<<endl;
                              cin>>numero;
                              for (i=10;i>1;i--){
                                    cin>>i;
                                numero=numero*i;
                                cout<<"la multiplicacion es"<<numero<<endl;


                              }

                           break;
                       case 3:cout<<"chau"<<endl;
                           break;
                        default:
                                 cout<<"fin el programa"<<endl;
                             break;
      }


    }
    while (salir=0);
}






