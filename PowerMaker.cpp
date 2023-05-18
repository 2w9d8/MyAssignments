
/*
    @Author <b>2w9d8.</b>
    @description <b>A Solve to C++ assignment (x^n) .</b>

*/



// import requirements libraries to program
#include <iostream>

// name space
using namespace std;

// prototype declaration
void message(string);
int getPower(int,int);


int main() {

    int x; // x = the value u want to power it
    int power_value;

    message("`x`");
    cin >> x;
    message("`power`");
    cin >> power_value;

    cout << "The power to x is : " << getPower(x, power_value);

}

void message(string varName) {
    cout << "Please input the " << varName << " value : \n";
}

int getPower(int x, int power) {
    int result = 0;
    if (power != 0) {
        for (int j = 1 ; j < power; j++) {
            result = x*x;
            return result;
        }
    } else {
        result = 1;
        return result;
    }
    return result;
}





