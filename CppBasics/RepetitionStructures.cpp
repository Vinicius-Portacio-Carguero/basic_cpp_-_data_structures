#include <iostream>

using namespace std;

int main(){
    

    int i = 0;

    while(i <= 10){
        
        i++;

        cout << "output : " <<  i << endl;


    }

    int x = 0;

    do{
        x++;
        cout << "output 2 : " << x << endl;

    } while ( x <= 10);

    int z = 0; 

    for(z = z ; z <= 10; z++){

        cout << "output 3: " << z << endl;
    }

    return 0;

}