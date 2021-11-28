#include <iostream>

using namespace std;

int main () {

    float familyFoodExpense[5] = {100.20, 200.40, 320.60, 411.00, 100.00};

    float average = 0.00;

    for(int i=0; i < 5; i++ ) {

        average = (float)average + (float)familyFoodExpense[i]; 
    }

    for(int i=0; i < 5; i++ ) {

        if((float)familyFoodExpense[i] > (float)average / 5) {

            cout << "Familia " << i << "está acima da média" << endl;

        } else if((float)familyFoodExpense[i] == (float)average / 5){

            cout << "Familia " << i << "está na média" << endl;

        } else {

            cout << "Familia " << i << "está abaixo da média" << endl;

        }
    }

    cout << "Valor da média : " << (float)average / 5 << endl;

    return 0;

}