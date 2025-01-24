#include<iostream>
using namespace std;


 
int main()
{
  int count = 0;

  int a;
  cin >> a ;
  while(a > 5) {
    count += a/5;
    a /= 5;
  }

  cout << "trailing zeros : " << count << endl;
  return 0;
}