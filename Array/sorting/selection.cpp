#include "../ArrayCpp.h"
#include <iostream>
using namespace std;


int main() {
   ArrC array;
   int * arr = new int[5];
   arr = array.randomArray(arr,5,5,20);
   array.printArr(arr,5);
    int index;
   // for(int i = 0;i<7;i++) {
   //    index =i;
   //    for(int j = i+1;j<8;j++) {
   //       if(arr[j] < arr[index]) {
   //          index = j;
   //       }
   //    }
   //    swap(arr[i],arr[index]);
   // }

   for(int i = 4;i>= 0;i--){
      index = i;
      for(int j = i-1;j>=0;j--){
         if(arr[j] > arr[index]){
            index = j;
         }
      }
      swap(arr[i], arr[index]);

   }
   
   array.printArr(arr,5);
     
}