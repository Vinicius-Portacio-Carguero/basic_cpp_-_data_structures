#include <iostream>

using namespace std;

// array unidimensional -> vetores || bidimensional -> matriz

int main() {

    int matrices[2][3];

    matrices[0][0] = 11;
    matrices[0][1] = 12;
    matrices[0][2] = 13;

    matrices[1][0] = 14;
    matrices[1][1] = 14;
    matrices[1][2] = 14;


    for(int i=0; i<2; i++){
         
        for(int j=0; j<3; j++){
            cout << matrices[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}