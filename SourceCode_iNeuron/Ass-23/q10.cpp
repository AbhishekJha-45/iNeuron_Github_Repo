#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {5, 2, 4, 8, 7, 12, 31, 1, 3, 78}, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the elements of the array is : " << sum;
    return 0;
}