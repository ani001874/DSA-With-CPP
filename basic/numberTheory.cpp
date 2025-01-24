
#include <iostream>

using namespace std;

class NumberTheory
{

public:
    int d2b(int d)
    {
        int binary = 0;
        int mult = 1;
        int remainder = 0;
        while (d > 0)
        {
            remainder = d % 2;
            binary = remainder * mult + binary;
            mult = mult * 10;
            d = d / 2;
        }

        return binary;
    }


    int b2d (int b) {
        int decimal = 0;
        int fact = 1;
        
        while (b > 0) {
            int digit = b % 10;
            decimal = fact * digit + decimal;
            fact *=2;
            b /=10;

        }

        return decimal;
    }
};

int main()
{
    int num;
    cout << "Enter a number to convert binary: ";
    cin >> num;

    NumberTheory nt;
    cout << nt.b2d(10000) << endl;
    
}