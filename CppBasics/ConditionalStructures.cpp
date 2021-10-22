#include <iostream>

using namespace std;


float media(float notes[]){

    float sum = notes[0] + notes[1] + notes[2];

    return (float)sum / (float)3 ;
}

int main(){

    float notes[] = {9.00, 5.00, 5.00};
    
    // Igual: ==
    // Maior ou Igual: >=
    // Menor ou Igual: <=
    // Diferente que: !=


    if(media(notes) > 5){

        cout << "Nota ACIMA da média" << endl;

    }
    else if(media(notes) < 5) {

        cout << "Nota ABAIXO da média" << endl;

    }
    else if(media(notes) == 5) {

        cout << "Nota média" << endl;

    }
    else {

        cout << "Erro de processamento, verifique as entradas e tente novamente" << endl;

    }

    return 0;
}