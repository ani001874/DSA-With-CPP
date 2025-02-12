#include<iostream>
using namespace std;

void greetBirthDay(int n) {
     if(n == 0) {
        cout << "Happy Birthday " << endl;
        return;
     }

     cout << n << " days left for BirthDay" << endl;
     greetBirthDay(n-1);

}
 
int main()
{
   greetBirthDay(5);
  return 0;
}