#include <iostream>
using namespace std;

int Fib(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return Fib(num - 1) + Fib(num - 2);
}

int main()
{
    int num = 0;
    cout << "Enter num: ";
    cin >> num;
    cout << endl << "Fibonachi nums:\n";
    cout << Fib(num) << std::endl;
}