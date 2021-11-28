#include <iostream>

using namespace std;
// Vector is a sequence or list of elements of same type
int main (){

    // Attribuition 1
    // int vector[4];
    // vector[0] = 5;
    // vector[1] = 10;

    // Attribuition 2
    int vector_2[3] = {5, 10, 15};

    for(int i = 0; i < 4; i++) {
        cout <<  vector_2[i] << endl;
    }

    // each int element weighs 4 bytes
    int x = sizeof(vector_2);
    cout << "Size : " << x << endl;

    int vectorSize = sizeof(vector_2) / sizeof(int);

    return 0;
}