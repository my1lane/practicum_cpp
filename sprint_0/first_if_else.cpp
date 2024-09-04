#include <iostream>

using namespace std;

int main()
{
    // Считайте целое число (код с ошейника) из стандартного ввода
    // Если это код 11235813, выведите Fibo is found (Фибо найден)
    // Иначе выведите This is not Fibo (Это не Фибо)
    int number;
    cin >> number;

    if (number == 11235813)
    {
        cout << "Fibo is found" << endl;
    }
    else
    {
        cout << "This is not Fibo" << endl;
    }
}