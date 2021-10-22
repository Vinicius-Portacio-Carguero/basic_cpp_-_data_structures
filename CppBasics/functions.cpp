#include <iostream>

using namespace std;

#define piValue 3.14;
#define like cout << "Liked defined constant" << endl;

void follow(int number){
    cout << "Number is: " << number << endl;
}

string follow_2(string text){
    
    return text;
}

int sum(int x, int y){
    
    int soma = x + y;
    return soma;
}

int main(){
    
    for(int n = 0; n<= 10; n++) {
        follow(n);
    }

    for(int n = 0; n<= 10; n++) {
        cout << follow_2("Follow 2 Teste numero : ") << n << endl;
    }

    cout << sum(10, 10) << endl;


    // defined constants
    cout << piValue;
    like

    return 0;
}