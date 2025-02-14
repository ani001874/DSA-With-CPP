
#include <iostream>
using namespace std;

// Here We are discussing String in cpp
// Why did we need string data type?
// when we try to store sentence in a variable as array of character , its may be any length
// We can't store any length of words or sentence 

int main()
{
    char s1[] = {'A', 'p', 'p', 'l', 'e'};
    // a null character(\0) is always  placed after the last character of an array
    cout << s1 << endl;
    // you can modify the postion of null character
    s1[2] = '\0';
    // if you modify the position of null character and then try to print ,the output will be from zero index upto  the null character
    cout << s1 << endl;
    // Problem
    int n;  // n is the size of array  of character. Now user can inputs any value of n  it lead to imporper usage
     
    // That's why string DS come to the picture , it  allocates memory dynamically like a vector

    string s2 = "Animesh ";
    string s3 = "Mahato";
    string fullName = s2 + s3;
    cout << fullName << endl;
    return 0;
}