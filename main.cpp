#include <iostream>
#include "Data.h"


using namespace std;

int main()
{
    Data aniversario;

    cout << "data : " << aniversario.getDia() << "/ " << aniversario.getMes() << "/ " << aniversario.getAno()<< endl;

    aniversario.setDia(24);
    aniversario.setMes(7);
    aniversario.setAno(2019);

    cout << "data : " << aniversario.getDia() << "/ " << aniversario.getMes() << "/ " << aniversario.getAno()<< endl;

    aniversario.avancarDia();

    cout << "data : " << aniversario.getDia() << "/ " << aniversario.getMes() << "/ " << aniversario.getAno()<< endl;


    return 0;
}
