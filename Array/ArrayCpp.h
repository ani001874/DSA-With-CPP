#ifndef ArrayCPP_H
#define ArrayCPP_H
#include <iostream>
using namespace std;

class ArrC
{
public:
    void printArr(int *arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int *randomArray(int *arr, int size, int min, int max)
    {
        srand(time(0));
        for(int i = 0;i<size;i++) {
            arr[i] = rand() % (max - min + 1) + min;
        }

        return arr;
    }
};

#endif