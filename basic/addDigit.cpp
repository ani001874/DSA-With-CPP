#include <iostream>
using namespace std;


int addDigit(int number) {


    while (number > 9) {
    int sum = 0;
    while (number != 0)
    {
        int digit = number %10;
        sum +=digit;
        number /= 10;
    }

    number = sum;
    }

 
    return number;
    
    
}


int main() {

    int digit_sum = addDigit(249);
    cout << digit_sum << endl;
    return 0;
}

