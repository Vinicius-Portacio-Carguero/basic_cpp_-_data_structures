#include <iostream>
#include<math.h>

using namespace std;

int main(){

    int x = 5, y = 2;

    int sum  = x + y;
    cout << "Soma : " << sum << endl;

    int sub = x - y;
    cout << "Sub : " << sub << endl;

    int mult = x * y;
    cout << "Mult : " << mult << endl;

     
    int quocient = x/y;
    cout << "Div : " << quocient << endl;

    // resto da divisão
    int quocient_2 = x%y;
    cout << "Div 2 : " << quocient_2 << endl;

    float quocient_3 = (float)x / (float)y;
    cout << "Div 3 : "<< quocient_3 << endl;

    // http://www.cplusplus.com/reference/cmath/
    float pot = pow(y,x);
    cout << "Pot : " << pot << endl;

    int a = 1;
    int b = 2;

    // b +=1
    a++;
    cout << "After increment : " <<  a << endl;

    // b -=1
    b--;
    cout << "After decrement : " << b << endl;

}
