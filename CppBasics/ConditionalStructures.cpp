#include <iostream>

using namespace std;


float calcNote(float notes[]){

    float sum = notes[0] + notes[1] + notes[2];

    return (float)sum / (float)3 ;
}

int main(){

    float notes[] = {9.42, 3.93, 4.00};
    
    if(calcNote(notes) >= 5){

        cout << "Nota ACIMA da média" << endl;

    } else {

        cout << "Nota ABAIXO da média" << endl;
    }

    return 0;
}