#include <iostream>
#include <cstddef>


using namespace std;

int main(){

    int vectorSize;
    int vectorElement;
    int isReset = 1;


    while(isReset == 1) {
        cout << "Insira o tamanho do vetor : ";
        cin >> vectorSize;

        int* vectorP = new int[vectorSize];


        for(int i = 0 ; i < vectorSize; i++ ) {


            cout << "Insira o " << i << "o elementos do vetor : ";
            cin >> vectorElement;

            vectorP[i] = vectorElement;
        }


        for(int i = 0 ; i < vectorSize; i++ ) {
            cout << vectorP[i] << " ";
        }

        cout <<  "Deseja iniciar outro vetor ? (1 - sim | 2 - não :)";
        cin >> isReset;

        delete[] vectorP;
    }

    return 0;
}