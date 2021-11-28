#include <iostream>

using namespace std;

int main(){
    int integerVariable = 5;    
    cout << "Int : " << integerVariable << " | ";
    
    float floatVariable = 2.13;
    cout << "Float: " << floatVariable <<  " | ";

    double doubleVariable = 5.2e99;
    cout << "Double : "<< doubleVariable <<  " | ";

    bool booleanTrue = true;  // 1
    bool booleanFalse = false; // 0
    cout << "True: " << booleanTrue <<  " | ";
    cout << "False: " << booleanFalse <<  " | ";

    char charVariable = 'A';
    cout << "Char: "<< charVariable <<  " | ";

    string strVariable = "String";
    cout << strVariable << endl;

    string inputAge = "Input your age: ";
    string savedAge = "Saved age: ";
    int age;

    cout << inputAge;
    cin >> age;
    cout << savedAge << age;

    return 0;
}

