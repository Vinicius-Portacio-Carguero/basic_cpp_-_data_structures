#include <iostream>

//f(x) = xˆ2 - 3x + 5 

using namespace std;


int equation(int x){

    int firstElement = pow(x, 2);
    int secondElement = 3*x;
    int thirdElement = 5;


    int equation = firstElement - secondElement + thirdElement;
    return equation;

}

int main(){

    int X;
    char confirm;

    cout << "Informe o valor de X : ";
    cin >> X;
    cout << "Confirma que o valor informado é ? (y/n) " << X << endl;
    cin >> confirm;

    if(confirm == 'y'){

        int result = equation(X);
        
        cout << "Resultado da equação : " <<  result << endl;


    } else {
        cout << "Por favor, reinicie o programa" << endl;
    }

    
}