#include <iostream>
#include "Data.h"

using namespace std;

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

Data::Data(int d, int m, int a)
{
    setDia(d);
    setMes(m);
    ano = a;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    if(dia>0 && dia<=31){
        this -> dia = dia;
    }
    else cout << "Data invalida!" << endl;
}

void Data::setMes(int mes){
    if(mes>0 && mes<=12){
        this-> mes = mes;
    }
    else cout << "Data invalida!" << endl;
}

void Data::setAno(int ano){
    this-> ano = ano;
}

void Data::avancarDia(){
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 ||mes == 12){
        if(dia == 31){
            mes++;
            dia = 1;
        }
        if(mes == 13){
            mes = 1;
            ano++;
        }
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia == 31){
            mes++;
            dia = 1;
        }
    }else if(mes == 2){
        if(dia == 28){
            mes++;
            dia = 1;
        }
    }
    if(dia > 1 && dia < 32 && mes > 0 && mes < 13){
        dia++;
    }
}

