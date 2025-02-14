#include<iostream>
using namespace std;

int sumOfDigit(int n) {
    if(n <= 9) {
        return n;
    }
    int digit = n % 10;
    return digit + sumOfDigit(n/10);
}
 
int main()
{
  cout << "Sum of Digit is : " << sumOfDigit(7894256) << endl;
  return 0;
}