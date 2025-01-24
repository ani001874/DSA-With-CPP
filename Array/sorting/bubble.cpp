#include "../ArrayCpp.h"
#include<iostream>
using namespace std;
 
int main()
{
  ArrC array;
  int * arr =  new int[5];
  arr = array.randomArray(arr,5,5,100);
  array.printArr(arr,5);



//   for(int i = 0;i<4;i++){
//      bool isSwap = 0;
//     for(int j= 0;j<4-i;j++) {
//         if(arr[j] > arr[j+1]){
//             isSwap = 1;
//             swap(arr[j] , arr[j+1]);
//         }
//     }

//     if(isSwap == 0) {
//         cout << "Array is Sorted" << " ";
//         break;
//     }
     
//   }



for(int i = 4;i>=1;i--){
     
  bool swaped = 0;
  for(int j= 4 ; j>=(4-i)+1;j--) {
      if(arr[j] < arr[j-1]) {
         swap(arr[j],arr[j-1]);
      }

  }
    
     
  }
  
  array.printArr(arr,5);
  
  return 0;
}