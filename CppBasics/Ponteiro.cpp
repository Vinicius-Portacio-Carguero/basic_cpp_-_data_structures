#include <iostream>
#include <cstddef>

using namespace std;

int main (){

    int var_1;
    
    // * indicativo de ponteiro
    int* pont_1;

    var_1 = 52123;

    // & armazena endereço da variável var_1
    pont_1 =& var_1;

    cout << "Variavel : " << var_1 << endl;
    cout << "Ponteiro : " << pont_1 << endl;

    // * acessa endereço e retorna valor atribuido
    cout << "Ponteiro *: " << *pont_1 << endl;

    int var2;
    // atribuindo ponteiro á variável
    var2 = *pont_1;

    var2 = 50;
    pont_1 =& var2;
    cout << *pont_1 <<endl;
    

    int* pont2;
    pont2 = NULL;
    cout << *pont2 << endl;


    int* pont3 = new int;
    *pont3 = 35;
    cout << pont3 << endl; // 0x ....
    cout << *pont3 << endl;

    delete pont3; // elimina valor atribuído
    pont3 = pont_1;




    return 0;
}