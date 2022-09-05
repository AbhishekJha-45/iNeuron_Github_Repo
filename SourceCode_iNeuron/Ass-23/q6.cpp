#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    float avg;
    cout << "Enter 3 Numbers :";
    cin >> num1 >> num2 >> num3;
    avg = (num1 + num2 + num3) / 3;
    cout << "Average of 3 given numbers is : " << avg;
    return 0;
}