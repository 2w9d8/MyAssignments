
/*
    @Author <b>2w9d8.</b>
    @description <b>A Solve to C++ assignment (sum = 1^2 + ... + n^2) .</b>
*/



// import requirements libraries to program
#include <iostream>

// name space
using namespace std;

// prototype declaration
int squares_sum(int);


int main() {
    int n;
    cout << "The mechanism will collect the squares of numbers from zero to the number you specify. Please enter the number : " << endl;
    cin >> n;
    cout << "\n the squares of numbers from 0 to " << n << " is : " << squares_sum(n);
    return 0;
}


int squares_sum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}






