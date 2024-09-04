#include <iostream>
#include <string>

using namespace std;

int main()
{
    string color_1, color_2, color_3, color_4;
    cin >> color_1 >> color_2 >> color_3 >> color_4;
    string answer_1 = "Enter the house ";
    string answer_2 = "Seek somewhere else";

    if (color_4 == color_1)
    {
        cout << answer_1 << 1 << endl;
    }
    else if (color_4 == color_2)
    {
        cout << answer_1 << 2 << endl;
    }
    else if (color_4 == color_3)
    {
        cout << answer_1 << 3 << endl;
    }
    else
    {
        cout << answer_2 << endl;
    }
}