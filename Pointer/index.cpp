#include<iostream>
using namespace std;
 
int main()
{
  // int a = 10;
  // cout << &a << endl;
  // int * ptr = &a;
  // cout << ptr << endl;

  // double b = 4.5555;
  // cout << &b << endl;
  // cout << sizeof(&b) << endl;

  char arr[6] = "12345";
  char * ptr = arr;
  cout << arr << endl << (void*)ptr << endl;

  char a = 'a';
  ptr = &a;
  cout << (void*) ptr << endl;
  return 0;
}