#include <iostream>
using namespace std;


int digit_number (int number) {
    int count =0;
    int temp  = number;

    while(temp != 0) {
        count++;
        temp/=10;
    }

    return count;
}

int power10 (int count) {
     int power =1;
     int base =10;
    for(int i = count;i >1; i--){
        power = power * base;
    }
    return power;

};

int reverse (int num) {
    int temp = num;
    int reverse_num = 0;
    

    while(temp != 0) {
      int digit = temp % 10;
      reverse_num = reverse_num * 10 + digit;
      temp /=10;
    }
    return reverse_num;

};

int main() {

    int reverseNum = reverse(4756);
    cout << reverseNum << endl;
    

}