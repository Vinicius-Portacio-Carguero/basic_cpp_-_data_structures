#include <iostream>

using namespace std;
// Vector is a sequence or list of elements of same type
int main (){

    // Attribuition
    int vector_2[3] = {5, 10, 15};

    for(int i = 0; i < 4; i++) {
        cout <<  vector_2[i] << endl;
    }
 
    // each int element weighs 4 bytes
    int x = sizeof(vector_2);
    cout << "Size : " << x << endl;

    int vectorSize = sizeof(vector_2) / sizeof(int);


    int size;
    size = 5;

    int* vector = new int[size];

    for( int i = 0; i < size - 1; i++ ){
        vector[i] = size * i;
    }

    for( int i = 0; i < size - 1; i++ ){
        cout << vector[i] << " ";
    }

    



    return 0;
}