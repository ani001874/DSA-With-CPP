#include<iostream>
using namespace std;
 
 int sqrt(int num) {
    int root = 0;
    for(int i = 1; i<num;i++) {

        if( i*i > num) break; 
        root = i;
    }
    return root;

 }
int main()
{
 int sqrX = sqrt(225);
 cout << sqrX << endl;
  return 0;
}