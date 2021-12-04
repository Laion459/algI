#include <iostream>

int main() {

    int edad=0,id=0, cantidadVentaQuarenta=0, entreDiezYOchoYTreinta=0, parada=0, mujeres=0, hombres=0;
    char sexo;
    float importeFactura=0;
    std::cout << "Bienvenido al control del WALY !" << std::endl;



    std::cout <<"Digite el id: "<<std::endl;
    std::cin >>id;
    std::cout << "Digite su edad: "<<std::endl;
    std::cin >> edad;
    std::cout <<"Digite sexo 'M' o 'F' "<<std::endl;
    std::cin >>sexo;
    std::cout <<"digite el importe de la factura: "<<std::endl;
    std::cin>>importeFactura;


    if (edad < 40){
        cantidadVentaQuarenta = cantidadVentaQuarenta + 1;
    }
    if (edad >= 18 and edad <= 30){
        entreDiezYOchoYTreinta = entreDiezYOchoYTreinta + 1;
    }
    if (sexo == 'F' or 'f'){
        mujeres++;
    } else{
        if (sexo == 'M' or sexo == 'm') {
            hombres++;
        }else {
            std::cout << "Sexo invalido" << std::endl;
        }
    }



    std::cout<<"Cantidad de ventas menores de 40 anos: "  ,cantidadVentaQuarenta;
    std::cout <<" " <<std::endl;
    std::cout<<"Cantidad de ventas entre 18 y 30 anos: "  ,entreDiezYOchoYTreinta;
    std::cout <<" " <<std::endl;
    std::cout<<"Cantidad de ventas a mujeres: "  ,mujeres;
    std::cout <<" " <<std::endl;
    std::cout<<"Cantidad de ventas a hombres: "  ,hombres;



    return 0;
}
