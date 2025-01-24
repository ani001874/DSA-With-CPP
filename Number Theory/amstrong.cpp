#include <iostream>
using namespace std;

int count_digits(int n = 0)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int pow(int digit, int count)
{
    int value = 1;
    for (int i = 1; i <= count; i++)
    {
        value *= digit;
    }
    return value;
}

bool isAmstrong(int n)
{
    int count = count_digits(n);
    int temp = n;
    int result = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        result += pow(digit, count);
        temp /= 10;
    }

    if (result == n)
    {

        cout << result << endl;

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    cout << isAmstrong(153) << endl;
    //

    cout << "amstrong number b/w 100 to ...." << endl;
    for (int i = 10; i < 1000; i++)
    {
        isAmstrong(i);
    }
    return 0;
}