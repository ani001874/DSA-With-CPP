#include<iostream>
using namespace std;

int* rotate (int * arr, int k, int n) {
    int j =0;
    int *rotate_arr = new int[n];
    
    for(int i = n-k ; i< n;i++){
       rotate_arr[j++] = arr[i];
    }

    for(int i =0;i<n-k;i++) rotate_arr[j++] = arr[i];

  return rotate_arr;
    

}

void print_arr (int * arr, int n) {
    for (int i =0;i<n;i++) {
         cout << arr[i] << " ";
    }

    cout << endl;
}

void reverse(int * arr, int l, int m, int n) {
  
   while(l< m) {
    int temp = arr[l];
    arr[l] = arr[m];
    arr[m] = temp;
    l++;
    m--;
   }
   

}
 
int main()
{
    int k;
    cout << "How many times you want to rotate? ";
    cin >>  k;
    int arr[7] = {1,2,3,4,5,6,7};
    print_arr(arr,7);
    // int* rotate_arr = rotate(arr,k,7);
    // cout << "After Rotating..." << endl;
    // print_arr(rotate_arr,7);

    reverse(arr,0,7-k-1, 7);
    print_arr(arr,7);
    reverse(arr,7-k,7-1,7);
    print_arr(arr,7);
    reverse(arr,0,7-1,7);
    print_arr(arr,7);
   
   
 
    


  return 0;
}