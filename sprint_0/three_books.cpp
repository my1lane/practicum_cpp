#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_book, second_book, third_book;

    getline(cin, first_book);
    getline(cin, second_book);
    getline(cin, third_book);

    cout << third_book << endl
    << second_book << endl
    << first_book << endl;
}