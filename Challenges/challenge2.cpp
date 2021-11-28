
// Crie um Algoritmo em C++, que tenha uma função
// que calcula o fatorial de um número inteiro positivo,
// informado pelo usuário.

#include <iostream>

using namespace std;

void main(){

    factorial(5);
}


int factorial(int number){

    int factorial = number;
    int result;

    do {

        if(number == 2 ){

            cout << "factorial is empty" << endl;

            result = factorial;

            break;
        
        } else {

            factorial = factorial * (number - 1); 
    
            number--;
            
        }

    } while(number > 0);
    
    cout << "End of processing, result is: " << result << endl;
    return result;

}
